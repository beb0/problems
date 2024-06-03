#include <bits/stdc++.h>
using namespace std;

int main() {

    long long n, x, sum = 0, count = 0, total = 0;

    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    cin >> x;

    count = ((x / sum) * n) + n;
    total = (count/n) * sum;

    for (int i = n - 1 ; i >= 0 ; i--)
    {
        if(total <= x)
            break;

        total -= arr[i];
        count--;
    }

    cout << ++count << endl;

}