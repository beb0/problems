#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, floors = 0, stairs = 0;

    cin >> n;

    int arr[n];

    vector<int> vec;

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    for (int i = n - 1; i >= 0; i--)
    {   
        stairs++;

        if(arr[i] == 1)
        {
            floors++;
            vec.push_back(stairs);
            stairs = 0;
        }    
    }

    cout << floors << endl;

    vector<int>::reverse_iterator it = vec.rbegin();
    while (it != vec.rend())
    {
        cout << *it << " ";
        it++;
    }
    
}