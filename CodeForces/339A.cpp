#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str, str2 = ""; cin >> str;

    sort(str.begin(), str.end());

    for (int i = 0; i < str.size()-1; i++)
    {
        if(str[i] == '+') continue;
        str2 += str[i];
        str2 += '+';
    }


    cout << str2 + str[str.size() - 1];
    

}