#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k; cin >> n >> k;
    string str = "";
    char a = 96;

    int dist = k;

    while(k-- && n--)
    {
        a++;
        str += a;
    }

    while (n--)
    {
        if(a == 96 + dist)
            a = 96;
        a++;
        str += a;
    }

    cout << str;
    
}