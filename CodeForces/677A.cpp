#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, h, cnt = 0; cin >> n >> h;

    for (int i = 0; i < n; i++)
    {
        int tmp; cin >> tmp;

        if(tmp > h)
            cnt += 2;
        else
            cnt++;
    }
    
    cout << cnt;
}