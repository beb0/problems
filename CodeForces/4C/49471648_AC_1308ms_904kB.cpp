#include <bits/stdc++.h>
using namespace std;

int main() {

    int tc; cin >> tc;
    unordered_map<string, int> ump;

    while(tc--)
    {
        string str;

        cin >> str;

        if(ump.find(str) != ump.end())
        {
            cout << str << ump[str] << endl;
            ump[str]++;
        }
        else
        {
            cout << "OK" << endl;
            ump[str]++;
        }
    }
}
