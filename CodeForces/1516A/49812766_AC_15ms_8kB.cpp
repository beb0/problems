#include <bits/stdc++.h>
using namespace std;

int main() {

    int t; cin >> t;

    while (t--)
    {
        int n, k; cin >> n >> k;

        int arr[n];

        for(auto & i : arr) cin >> i;

        for (int i = 0; i < n - 1; ++i) {
            if(k >= arr[i])
            {
                k-= arr[i];
                arr[n-1] += arr[i];
                arr[i] = 0;
            }
            else
            {
                arr[n-1] += k;
                arr[i] -= k;
                break;
            }
        }

        for(auto & i : arr) cout << i << " ";

        cout << '\n';
    }

}