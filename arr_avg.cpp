#include <bits/stdc++.h>
using namespace std;

//calculating array avg

double arr_avg(int arr[], int l)
{
    if(l == 1)
        return arr[0];
    else
        return (arr[l - 1] + (arr_avg(arr, l - 1) * (l - 1))) / l;
}

int main() {

    int arr[] = {1, 8, 2, 10, 3}; //4.8

    cout << arr_avg(arr, 5);

}