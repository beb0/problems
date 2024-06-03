#include <bits/stdc++.h>
using namespace std;

int main() {

    int n; cin >> n;

    int arr[n];

    for(auto &i : arr) cin >> i;

    sort(arr, arr+n);

    swap(arr[0], arr[n-1]);

    for(int i : arr) cout << i << " ";
}