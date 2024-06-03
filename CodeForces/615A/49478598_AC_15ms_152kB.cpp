#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, count = 0;
    cin >> n >> m;
    set<int> bulbs, buttons;

    for (int i = 1; i <= m; ++i)
        bulbs.insert(i);

    while (n--)
    {
        int k; cin >> k;
        while (k--)
        {
            int j; cin >> j;
            buttons.insert(j);
        }
    }

    if(buttons.size() != bulbs.size())
        return cout << "NO", 0;
    else
    {
        auto bulStart = bulbs.begin();
        auto butStart = buttons.begin();

        int i = 0;
        while (i < bulbs.size()) {
            if(*butStart != *bulStart)
                return cout << "NO", 0;
            i++;
            bulStart++;
            butStart++;
        }
    }

    cout << "YES";

}