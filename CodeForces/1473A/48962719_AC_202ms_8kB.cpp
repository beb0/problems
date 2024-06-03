#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n, d, sum = 0;

        bool has = false;

        cin >> n >> d;

        int arr[n];

        for (int j = 0; j < n; j++)
            cin >> arr[j];

        for (int j = 0; j < n; j++)
        {
            if (arr[j] > d)
            {
                has = true;
                break;
            }
        }

        if (has == false)
        {
            cout << "Yes" << endl;
            continue;
        }
        else
        {
            sort(arr, arr + n);

            sum = arr[0] + arr[1];

            if (sum <= d)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
}