#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, x, a, sum = 0;
    cin >> n >> k >> x;

    for (int i = 0; i < n-k; i++)
    {
        cin >> a;
        sum += a;
    }

    sum += (k*x);

    cout << sum;
   
}