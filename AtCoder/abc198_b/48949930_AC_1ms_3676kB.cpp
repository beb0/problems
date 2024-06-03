#include <bits/stdc++.h>
using namespace std;

int main() {

    string str, str2;

    cin >> str;

    while (str.back() == '0')
        str.pop_back();
    
    str2 = str;

    reverse(str2.begin(), str2.end());

    if(str2 == str)
        cout << "Yes";
    else
        cout << "No";

}