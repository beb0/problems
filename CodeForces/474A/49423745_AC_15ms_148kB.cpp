#include <bits/stdc++.h>
using namespace std;

int main() {

    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
    unordered_map<char, char> l;
    unordered_map<char, char> r;

    l['q'] = 'q';
    r['/'] = '/';

    for (int i = 1; i < keyboard.size(); ++i)
        l[keyboard[i-1]] = keyboard[i];

    for (int i = 0; i < keyboard.size() - 1; ++i)
        r[keyboard[i+1]] = keyboard[i];

    char side; cin >> side;

    if (side == 'R')
    {
        string inp;
        cin >> inp;
        for (char c: inp)
            cout << r[c];
    }
    else
    {
        string inp;
        cin >> inp;
        for (char c: inp)
            cout << l[c];
    }

}
