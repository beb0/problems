#include <bits/stdc++.h>
using namespace std;

double avg(int arr[], int l)
{
    if(l == 1)
        return arr[0];
    else
        return (arr[l-1] + (avg(arr, l - 1) * (l-1))) / l;
}

int main() {

    int arr[] = {1, 8, 2, 10, 3}; //avg 16/5 = 3.2

    cout << avg(arr, 5);

}