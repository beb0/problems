#include <iostream>
using namespace std;

int main()
{
    int num;

    cin >> num;

    int arr[num];


    for(int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    int l,r;

    cin >> l >> r;

    for(int i = l-1; i<r; i++)
        cout<<arr[i] <<" ";

    return 0;
}