#include <bits/stdc++.h>
using namespace std;

int rSum(int index, int arr[])
{
    if (index == 0) return arr[index];

    return arr[index] + rSum(index - 1, arr);
}

int main() {
    int tc; cin >> tc;

    for (int i = 1; i <= tc; i++)
    {
        int n; cin >> n;
        int arr[n]; for(auto & k : arr) cin >> k;
        int ans = rSum(n - 1 , arr);
        cout << "Case " << i << ": " << ans << '\n';
    }

}
