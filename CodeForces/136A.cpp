#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int arr[n+1];

    for (int i = 1 ; i <= n; i++)
    {
        int c; cin >> c; arr[c] = i;
    }

    for (int i = 1; i <= n; i++)
        cout << arr[i] << " ";
    
    
}