#include <bits/stdc++.h>

using namespace std;

int main() {

    int tc;
    cin >> tc;

    while (tc--) {
        int n; cin >> n;

        long long arr[n];
        bool square = false;

        for (int i = 0; i < n; ++i)
            cin >> arr[i];

        for (int i = 0; i < n - 1; ++i) {
            if(arr[i] == arr[i+1] && arr[i] != 1 && arr[i] != 0)
                square = true;
        }

        if(square)
            cout << "SQUARE" << endl;
        else
            cout << "TRIANGLE" << endl;
    }
}