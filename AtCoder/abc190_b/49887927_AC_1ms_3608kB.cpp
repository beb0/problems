#include <bits/stdc++.h>
using namespace std;

string magic(int n, int s, int d, int x, int y)
{
    cin >> x >> y;

    if (s > x && y > d)
        return "Yes";
    if (n == 1)
        return "No";
    return magic(n-1, s, d, x, y);
}

int main()
{
    int n, s, d, x, y; cin >> n >> s >> d;

    cout << magic(n, s, d, x, y);
}