#include <bits/stdc++.h>
using namespace std;

int main() {
    int b, n, m;

    long long sum = 0, mx = 0;

    cin >> b >> n >> m;

    int keyboards[n], usb[m];

    for (int i = 0; i < n; ++i)
        cin >> keyboards[i];

    for (int i = 0; i < m; ++i)
        cin >> usb[i];

    sort(keyboards, keyboards + n, greater<>());
    sort(usb, usb + m, greater<>());


    // Akbar 2 el sum beta3hom le b

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if(keyboards[i] + usb[j] <= b)
            {
                sum = keyboards[i] + usb[j];
                mx = max(mx, sum);
            }
        }
    }

    if(mx)
        cout << mx;
    else
        cout << -1;

}