#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int s = 0, d = 0, r = n - 1, l = 0;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0) 
        {
            if (arr[l] >= arr[r])
            {
                s += arr[l];
                l++;
            }
            else
            {
                s += arr[r];
                r--;
            }
        }
        else
        {
             if (arr[l] >= arr[r])
            {
                d += arr[l];
                l++;
            }
            else
            {
                d += arr[r];
                r--;
            } 
        }
    }

    cout << s << " " << d;
}