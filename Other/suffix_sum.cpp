#include <iostream>
using namespace std;

int suffix_sum(int arr[], int cnt, int l)
{
    if(cnt == 1) return arr[l - cnt];
    else return arr[l - cnt] + suffix_sum(arr, cnt - 1, l);
}

int main()
{
    //Input [1, 3, 4, 6, 7], 3 ⇒ 17 (4+6+7)
    int arr[] = {1, 3, 4, 6, 7};

    cout << suffix_sum(arr, 3, 5);
}