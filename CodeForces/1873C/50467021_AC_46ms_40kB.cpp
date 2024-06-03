#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--)
    {
        int ones = 0, twos = 0, threes = 0, fours = 0, fives = 0;
        char x;

        for (int i = 1; i <= 10; ++i) {
            for (int j = 1; j <= 10; ++j) {
                cin >> x;
                if(x == 'X'){
                    if(i == 1 || i == 10 || j == 1 || j == 10)
                        ones++;
                    else if(i == 2 || i == 9 || j == 2 || j == 9)
                        twos++;
                    else if(i == 3 || i == 8 || j == 3 || j == 8)
                        threes++;
                    else if( i == 4 || i == 7 || j == 4 || j == 7)
                        fours++;
                    else if(i == 5 || i == 6 || j == 5 || j == 6)
                        fives++;
                }
            }
        }

        cout << (1*ones) + (2*twos) + (3*threes) + (4*fours) + (5*fives) << endl;
    }
}