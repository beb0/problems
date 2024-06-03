#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, min_dif = 1e9;

    bool found = false;

    string str;

    cin >> n;

    cin >> str;

    int arr[n];

    vector<int> vec;

    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    for (int i = 0; i < n-1; ++i) {
        if(str[i] == 'R' && str[i+1] == 'L')
        {
            min_dif = min(min_dif, (arr[i+1] - arr[i]));
            found = true;
        }

    }

    if(found)
    cout << min_dif/2;
    else
        cout << -1;


}