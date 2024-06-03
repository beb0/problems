#include <bits/stdc++.h>
using namespace std;

string roundd(string str, int index)
{
    if(index == str.size())
        return "";
    if(str[index] == '.')
        return "";
    return str[index] + roundd(str, index + 1);
}

int main()
{
    string str; cin >> str;

    cout << roundd(str, 0);
}