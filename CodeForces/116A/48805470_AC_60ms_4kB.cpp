#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n, out, in, curr = 0, max = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> out >> in;

        curr += in - out;

        if (max < curr)
            max = curr;
    }
    
    cout << max;
}