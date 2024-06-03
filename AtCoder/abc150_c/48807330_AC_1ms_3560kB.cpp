#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n, count = 0, num1C = 0, num2C = 0, num1e = 0, num2e = 0;
    bool num1check = false, num2check = false;

    cin >> n;

    int arr[n], num1[n], num2[n];

    for (int i = 0; i < n; i++)
        cin >> num1[i];
    
    for (int i = 0; i < n; i++)
        cin >> num2[i];

    for (int i = 1; i <= n; i++)
        arr[i - 1] = i;

    do
    {
        count++;

        for (int i = 0; i < n; i++)
        {
            if(arr[i] == num1[i])
                num1C++;
            
            if(arr[i] == num2[i])
                num2C++;

        }

        if(num1C == n)
        {
            num1e = count;
            num1check = true;
        }
        if(num2C == n)
        {
            num2e = count;
            num2check = true;
        }
        
        num1C = num2C = 0;

        if (num1check == true && num2check == true)
            break;

        
    } while (next_permutation(arr, arr+n));
    
    cout << abs(num1e - num2e);


    
}