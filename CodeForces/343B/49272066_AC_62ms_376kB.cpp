#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    stack<char> stk;

    for(char c : str)
    {
        if(!stk.empty() && stk.top() == c)
            stk.pop();
        else
            stk.push(c);
    }

    if(stk.empty())
        cout << "Yes" << '\n';
    else
        cout << "No" << '\n';
}