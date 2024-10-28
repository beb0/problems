#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int m;
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        int wire, from_left;
        cin >> wire >> from_left;

        wire--;

        if (wire - 1 < 0)
        {
            arr[wire + 1] += arr[wire] - from_left;
            arr[wire] = 0;
        }
        else if (wire + 1 == n)
        {
            arr[wire - 1] += from_left - 1;
            arr[wire] = 0;
        }
        else
        {
            arr[wire - 1] += from_left - 1;
            arr[wire + 1] += arr[wire] - from_left;
            arr[wire] = 0;
        }
    }

        for (int i = 0; i < n; i++)
            cout << arr[i] << endl;

        
}