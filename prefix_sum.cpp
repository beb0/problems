#include <iostream>
using namespace std;

int prefix_sum(int arr[], int cnt, int l)
{
    if(cnt == 1) return arr[0];
    else return arr[cnt - 1] + prefix_sum(arr, cnt - 1, l);
}

int main()
{
    //Input [1, 3, 4, 6, 7], 3 ⇒ 17 (4+6+7)
    int arr[] = {1, 3, 4, 6, 7};

    cout << prefix_sum(arr, 3, 5);
}