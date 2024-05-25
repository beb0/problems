#include <iostream>
using namespace std;

void left_max(int arr[], int l)
{
    if (l == 1)
    {
        cout << arr[0] << " ";
        return;
    }   
    else
    {
        left_max(arr, l - 1);
        arr[l-1] = max(arr[l - 2], arr[l - 1]);
        cout << max(arr[l - 2], arr[l - 1]) << " ";
    }
       
}

int main()
{
    int arr[] = {1, 3, 5, 7, 4, 2};

    left_max(arr, 6);
}