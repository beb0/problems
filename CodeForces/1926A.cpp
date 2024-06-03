    #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
     
        int tc; cin >> tc;
     
        while (tc--)
        {
            char arr[5];
            int aCount = 0;
     
            for (char & i : arr) {
                cin >> i;
                if (i == 'A')
                    aCount++;
            }
     
            if (aCount >= 3)
                cout << 'A' << endl;
            else
                cout << 'B' << endl;
        }
    }