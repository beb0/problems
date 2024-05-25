#include <bits/stdc++.h>
using namespace std;

//calculating array max

int mx(int arr[], int l)
{
    if(l == 0)
        return arr[0];
    else 
        return max(arr[l], mx(arr, l-1));
}

// int mx(int arr[], int l)
// {
//    if(l == 0)
//     return arr[0];
//     else if(arr[l] > mx(arr, l -1))
//         return arr[l];
//     else
//         return mx(arr, l -1);
// }

int main() {
    
    int arr[] = {1, 8, 2, 10, 3}; 

    cout << mx(arr, 5);
}