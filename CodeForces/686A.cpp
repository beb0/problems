#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc; long long ic = 0, le = 0; cin >> tc; cin >> ic;

    while (tc--)
    {
        char c; cin >> c;
        long long inp = 0; cin >> inp;

        if(c == '+')
            ic += inp;
        else if (ic - inp < 0)
            le++;
        else
            ic -= inp;
    }

    cout << ic << " " << le;
    
}