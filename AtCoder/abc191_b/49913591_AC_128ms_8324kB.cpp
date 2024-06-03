#include <bits/stdc++.h>
using namespace std;

void removeit(int n, int x)
{
    int a; cin >> a;
    if (a != x) cout << a << " ";
    if(n == 1) return;
    removeit(n - 1, x);
}

int main()
{
    int n, x; cin >> n >> x;

    removeit(n, x);
}