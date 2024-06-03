#include <bits/stdc++.h>
using namespace std;

int orth(int arr1[], int arr2[], int index)
{
    if(index == 0)
        return arr1[index] * arr2[index];
    return arr1[index] * arr2[index] + orth(arr1, arr2, index - 1 );
}

int main()
{
    int n; cin >> n;
    int arr1[n], arr2[n];
    for (auto & i: arr1) cin >> i;
    for (auto & i: arr2) cin >> i;

    if(orth(arr1, arr2, n-1) == 0) cout << "Yes";
    else cout << "No";

}