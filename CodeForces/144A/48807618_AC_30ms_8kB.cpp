#include <iostream>
using namespace std;

int main()
{
    int n, max_index = 0, min_index = 0, steps = 0;
    cin >> n;

    int arr[n] = {};

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        max_index = min_index = i;
        if (arr[i] > arr[max_index])
            max_index = i;
        if(arr[i] <= arr[min_index])
            min_index = i;  
    }
    
    if (max_index > min_index)
    {
        steps += max_index;
        min_index++;
        steps += (n - 1) - min_index;
    }
    else
    {
        steps += max_index;
        steps += (n - 1) - min_index;
    }
    
    cout << steps;
} 