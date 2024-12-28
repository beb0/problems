#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;

    long long arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    int cnt =  n - (count(arr, arr+n, arr[0]) + count(arr, arr+n, arr[n-1]));

    if(cnt>-1) cout << cnt; else cout << 0;
    
}