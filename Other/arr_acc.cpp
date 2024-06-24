#include <bits/stdc++.h>
using namespace std;

//accumulating array values

int arr_acc(int arr[], int l)
{
    if(l == 1)
    {
        cout << arr[0] << " ";
        return arr[0];
    }  
    else
    {
        int acc = arr[l - 1] + arr_acc(arr, l - 1);
        cout << acc << " ";
        return acc;
    }
}

int main() {
    int arr[] = {1, 8, 2, 10, 3};  //1 8 2 10 3 ⇒ 1 9 11 21 24
    arr_acc(arr, 5);
}