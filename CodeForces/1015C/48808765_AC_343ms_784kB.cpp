#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long n, m, sz, compr, szsum = 0, comprsum = 0, cnt = 0;

    cin >> n >> m;

    long long arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> sz >> compr;

        szsum += sz;
        comprsum += compr;
        arr[i] = sz - compr;
    }

    sort(arr, arr + n, greater<>());

    if (comprsum > m)
    {
        cout << -1;
        return 0;
    }

    while (szsum > m)
    {
        szsum -= arr[cnt];
        cnt++;
    }

    cout << cnt;
}