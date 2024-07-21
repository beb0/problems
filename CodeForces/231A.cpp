#include <bits/stdc++.h>
using namespace std;

//https://codeforces.com/contest/231/problem/A
int main()
{
    int tc, cnt = 0; cin >> tc;

    while (tc--)
    {
        int a, b, c; cin >> a >> b >> c;

        if(a+b+c >= 2) cnt++;
    }
    
    cout << cnt;
       
}