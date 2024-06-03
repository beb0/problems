#include <bits/stdc++.h>
using namespace std;

int main() {

    int a[3], b[3], sol[2], apoints = 0, bpoints = 0;

    for (int i = 0; i < 3; ++i) cin >> a[i];
    for (int i = 0; i < 3; ++i) cin >> b[i];

    for (int i = 0; i < 3; ++i) {
        if(a[i] > b[i])
            apoints++;
        else if (b[i] > a[i])
            bpoints++;
    }

    cout << apoints << " " << bpoints;
}
