#include <bits/stdc++.h>
using namespace std;

void inc(int arr[], int l)
{
    if(l == 1)
    {
        cout << arr[0] << " ";
        return;
    }

    inc(arr, l-1);
    cout << arr[l - 1] + l - 1 << " ";
}

int main() {

    int arr[] = {1, 8, 2, 10, 3}; //avg 16/5 = 3.2

    inc(arr, 5);

}