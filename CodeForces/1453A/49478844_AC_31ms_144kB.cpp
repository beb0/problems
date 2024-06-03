#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc; cin >> tc;

    while (tc--)
    {
        int n, m, count = 0; cin >> n >> m;
        unordered_set<int> left, right;

        while (n--)
        {
            int j; cin >> j;
            left.insert(j);
        }

        while (m--)
        {
            int j; cin >> j;
            if(left.find(j) != left.end())
                count++;
        }

        cout << count << endl;
    }
}