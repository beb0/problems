#include <bits/stdc++.h>
using namespace std;

int main() {

    unordered_set<char>ust;
    string whole, part;



    while (*(whole.end() - 1 ) != '}')
    {
        cin >> part;
        whole += part;
    }

    for (char c : whole) {
        if(c != '{' && c != ',' && c != '}')
            ust.insert(c);

    }

    cout << ust.size();
}
