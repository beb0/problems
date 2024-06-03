#include <bits/stdc++.h>
using namespace std;

int main() {

    int b = 0, c = 0;

    int n; cin >> n;

    while (n--)
    {
        int a; cin >> a;
        if(a >= 0)
            b+=a;
        else
            c+=a;
    }

    cout << b - c;
}
