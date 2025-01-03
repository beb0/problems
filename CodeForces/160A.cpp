#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum = 0, cnt = 0, str = 0;

    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    sort(arr, arr + n, greater<int>());

    for (int i = 0; i < n; i++)
    {
        if (sum < str)
            break;
        else
        {
            str += arr[i];
            sum -= arr[i];
            cnt++;
        }
    }

    cout << cnt;
}