#include <iostream>
using namespace std;

void left_max(int arr[], int l)
{
    if (l == 1)
    {
        arr[0] = max(arr[0], arr[1]);
        return;
    }   
    else
    {
        arr[l-2] = max(arr[l - 2], arr[l - 1]);
        left_max(arr, l - 1);
    }
       
}

int main()
{
    int arr[] = {1, 3, 5, 7, 4, 2};

    left_max(arr, 6);

    for(int i = 0; i < 6; i++)
        cout << arr[i] << " ";
}