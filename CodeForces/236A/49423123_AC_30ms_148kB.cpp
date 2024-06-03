#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_set<char> name;

    string inp;

    cin >> inp;

    for (char i : inp)
        name.insert(i);

    if(name.size() % 2)
        cout << "IGNORE HIM!";
    else
        cout << "CHAT WITH HER!";
}
