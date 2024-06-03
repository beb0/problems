#include <bits/stdc++.h>
using namespace std;

int main() {

    int t; cin >> t;

    while (t--)
    {
        int n, k, count = 0; cin >> n >> k;
        char arr[n];

        for (int i = 0; i < n; ++i)
            cin >> arr[i];

        for (int i = 0; i < n; ++i) {
            if(arr[i] == 'B')
            {
                if(i+k <= n){
                    i+=k-1;
                    count++;
                }
                else{
                    count++;
                    break;
                }
            }
        }

        cout << count << endl;
    }
}
