#include <bits/stdc++.h>
using namespace std;

//calculating array max

int arr_sum(int arr[], int l)
{
    if(l == 0)
        return arr[0];
    else 
        return arr[l] + arr_sum(arr, l - 1);
}

int main() {
    
    int arr[] = {1, 8, 2, 10, 3}; 

    cout << arr_sum(arr, 5);
}