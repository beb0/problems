#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y, w, A, B = 6; cin >> y >> w;

    A = 7 - max(y,w); // A - 6 + 1 
    
    for (int i = A; i > 1; i--)
    {
        if(B%i == 0 && A%i ==0)
        {
            B /= i;
            A /= i;
            break;
        }
    }

    cout<< A << '/' << B;
}