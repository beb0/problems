#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt = 0; cin>>n;

    string str; cin >> str;

    for (int i = 1; i < str.size(); i++)
    {
        if(str[i-1] == str[i])
            cnt++;
    }

    cout << cnt;
    
}