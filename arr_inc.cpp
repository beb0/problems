#include <bits/stdc++.h>
using namespace std;

//incrementing index on arr elements

void arr_inc(int arr[], int l)
{
    if(l == 1)
    {
        cout << arr[0] << " ";
        return;
    }

    arr_inc(arr, l-1);
    cout << arr[l - 1] + l - 1 << " ";
}

int main() {

    int arr[] = {1, 8, 2, 10, 3}; 

    arr_inc(arr, 5);
}