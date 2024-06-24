#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int arr[], int len, int index)
{
    if((arr[index] == arr[len-1]) && (len-1 || len-2) == index)
        return true;
    else if(arr[index] != arr[len - 1])
        return false;
    else
        return isPalindrome(arr, len - 1, index + 1);
}

int main()
{
    int arr[] = {1,0,1,0};

    cout << isPalindrome(arr, 4, 0);
}