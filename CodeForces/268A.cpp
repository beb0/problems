#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, count = 0;
    cin >> n;
    pair<int, int> arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i].first >> arr[i].second;

    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n; k++)
        {
            if (i == k)
                continue;
            else if (arr[i].first == arr[k].second)
                count++;
        }
    }

    cout << count;
}