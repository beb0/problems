#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<char> un;

    string line;
    getline(cin, line);

    for (int i = 0; i < line.size(); i++)
    {
        if (line[i] >= 97 && line[i] <= 122)
            un.insert(line[i]);
    }

    cout << un.size();
}