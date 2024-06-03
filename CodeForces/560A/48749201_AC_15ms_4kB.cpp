#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    bool unfortunate = false;

    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
        {
            unfortunate = true;
            break;
        }
    }

    if (!unfortunate)
        cout << 1;
    else
        cout << -1;
}