#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, max, min, count = 0;

    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    max = min = arr[0];

    for (int i = 0; i < n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
            count++;
        }
        if (arr[i] < min)
        {
            min = arr[i];
            count++;
        }
    }

    cout << count;
    
    
}