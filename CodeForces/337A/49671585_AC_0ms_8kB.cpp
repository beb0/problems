#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, m, diff = 1e9; cin >> n >> m;
    int arr[m];

    for (int i = 0; i < m; ++i)
        cin >> arr[i];

    sort(arr, arr+m, greater<>());


    for (int i = 0; i <= m - n; ++i)
        diff = min(diff, arr[i] - arr[i+(n-1)]);

    cout << diff;
}