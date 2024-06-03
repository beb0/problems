#include <bits/stdc++.h>
using namespace std;

int main() {

    map<int, int> mono; // 2 comes first
    multimap<int, int, greater<>> poly; // has more money

    int tc, q, m, counter = 1;

    cin >> tc;

    while (tc--)
    {
        cin >> q;

        switch (q) {
            case 1:
            {
                cin >> m;
                mono[counter] = m;
                poly.insert({m, counter});
                counter++;
                break;
            }
            case 2:
            {
                if(!mono.empty() && !poly.empty())
                {
                    cout << mono.begin()->first << " ";
                    auto it = poly.find(mono.begin()->second);
                    poly.erase(it);
                    mono.erase(mono.begin());
                }
                break;
            }
            case 3:
            {
                if(!mono.empty() && !poly.empty())
                {
                    cout << poly.begin()->second << " ";
                    auto it = mono.find(poly.begin()->second);
                    mono.erase(it);
                    poly.erase(poly.begin());
                }
                break;
            }

        }
    }

}