#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        string str;
        cin >> str;

        if (str.size() > 10)
        {
            cout << str[0] << str.size() - 2 << str[str.size()-1] << endl;
        }
        else
        {
            cout << str << endl;
        }
    }
}