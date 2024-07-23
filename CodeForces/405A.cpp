#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/contest/405/problem/A

// No STLs implementation

/*
int n;
cin >> n;
int arr[n];

for (int i = 0; i < n; i++)
    cin >> arr[i];

for (int i = 0; i < n; i++)
{
    int min_indx, min = 101;

    for (int j = i; j < n; j++)
    {
        if(arr[j] <= min)
        {
            min = arr[j];
            min_indx = j;
        }
    }

    int tmp = arr[min_indx];
    arr[min_indx] = arr[i];
    arr[i] = tmp;
}

for (int i = 0; i < n; i++)
    cout << arr[i] << " "; 
*/

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr+n);

    for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
}