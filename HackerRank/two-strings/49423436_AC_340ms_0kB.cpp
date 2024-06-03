#include <bits/stdc++.h>
using namespace std;

int main() {

    int tc; cin >> tc;

    while (tc--)
    {
        string str1, str2;
        bool found = false;

        unordered_set<char> us;

        cin >> str1 >> str2;

        for (char c : str1)
            us.insert(c);

        for (char c : str2)
        {
            auto it = us.find(c);
            if(it!= us.end())
            {
                found = true;
                break;
            }
        }

        if(found)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}
