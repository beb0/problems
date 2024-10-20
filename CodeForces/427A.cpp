#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int arr[n];
    int crime = 0, recruits = 0;
    

    for (int i = 0; i < n; i++)
    {
        int t; cin >> t;

        if(t == -1)
        {
            if(recruits == 0)
                crime++;
            else
                recruits--;
        }
        else
        {
            recruits += t;
        }
    }

    cout << crime;
    
}