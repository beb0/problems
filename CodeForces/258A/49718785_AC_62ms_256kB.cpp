#include <bits/stdc++.h>
using namespace std;

int main() {

   string str; cin >> str;

    int found = str.find('0');

    if (found != string::npos)
        str.erase(found, 1);
    else
        str.pop_back();

    cout << str;

}