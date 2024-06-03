#include <bits/stdc++.h>
using namespace std;

char reverseChar(char c)
{
    if(c == ')')
        return '(';
    else if(c == ']')
        return '[';
    else if(c == '}')
        return '{';
    else
        return 'd';
}
//Edge cases: ()) ))
int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        string str;
        stack<char> stk1, stk2;
        cin >> str;

        if(str.size() % 2)
        {
            cout << "NO" << endl;
            continue;
        }
        else
        {
            for (char i : str) {
                if (i == '(' || i == '[' || i == '{')
                    stk1.push(i);
                else
                {
                    stk2.push(str[i]);
                    char c;
                    c = reverseChar(i);
                    if(!stk1.empty() && stk1.top() == c )
                    {
                        stk1.pop();
                        stk2.pop();
                    }
                }
            }

            if(stk1.empty() && stk2.empty())
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }

    }
}