#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int arr[4], n = 0;
 
    for (int i = 0; i < 4; i++)
        cin >> arr[i];
    
    for (int i = 0; i < 4; i++)
    {
        if(count(arr+i, arr+4, arr[i]) > 1)
            n++;
    }
 
    cout << n;
    
}