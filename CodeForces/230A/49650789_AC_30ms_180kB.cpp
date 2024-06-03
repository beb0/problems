#include <bits/stdc++.h>
using namespace std;

int main() {
    long long s;
    int n;
    multimap<int, int> devils;

    cin >> s >> n;

    while (n--)
    {
        int x, y; cin >> x >> y;
        devils.insert({x, y});
    }


    for (pair<int, int> i: devils)
    {
        if(s > i.first)
            s += i.second;
        else
            return cout << "NO", 0;
    }

    cout << "YES";

}
