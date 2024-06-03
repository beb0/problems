#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, min = 1001;

    cin >> n >> m;

    int arr[m];

    for (int i = 0; i < m; i++)
        cin >> arr[i];

    sort(arr, arr + m);

    for (int i = 0; i <= m - n ; i++)
    {
        if (arr[i + n - 1] - arr[i] < min)
            min = arr[i + n - 1] - arr[i];
    }

    cout << min;
}
