#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;cin >> t;

    while(t--)
    {
        string arr[3];

        for (int i = 0; i < 3; ++i)
        {
            string str; cin >> arr[i];
        }

        for (const auto & i : arr) {
            size_t found = i.find('?');
            if (found!= string::npos )
            {
                found = i.find('A');
                if (found == string::npos )
                {
                    cout << 'A' << endl;
                    break;
                }

                found = i.find('B');
                if (found == string::npos )
                {
                    cout << 'B' << endl;
                    break;
                }

                found = i.find('C');
                if (found == string::npos )
                {
                    cout << 'C' << endl;
                    break;
                }
            }
        }




    }
}
