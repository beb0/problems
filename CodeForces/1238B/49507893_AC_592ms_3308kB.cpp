#include <bits/stdc++.h>
using namespace std;

int main() {

    int tc; cin >> tc;

    set<int, greater<>> monsters;

    while(tc--)
    {
        int n, r, x, cr = 0, shots = 0;
        cin >> n >> r;

        for (int i = 0; i < n; ++i) {
            cin >> x;
            monsters.insert(x);
        }

        while (!monsters.empty())
        {
            if(*monsters.begin() - cr > 0)
            {
                monsters.erase(monsters.begin());
                shots++;
                cr+=r;
            }
            else
            {
                monsters.erase(monsters.begin());
            }
        }

        cout << shots << '\n';

    }
}