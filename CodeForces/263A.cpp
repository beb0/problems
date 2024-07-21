#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ic, jc;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {     
            int a; cin >> a;
            if (a == 1)
            {
                ic = i;
                jc = j;
            }
        }
    }

    cout << abs(3-(ic + 1)) + abs(3-(jc + 1));
}