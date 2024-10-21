#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[4]; string str; int cal = 0;

    for (int i = 0; i < 4; i++)
        cin >> arr[i];

    cin >> str;

    for (int i = 0; i < str.size(); i++)
        cal += arr[int(str[i]) - 49];

    cout << cal;
    
}