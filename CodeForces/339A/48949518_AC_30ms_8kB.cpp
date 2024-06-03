#include <bits/stdc++.h>
using namespace std;

int main() {

string str, str2;

cin >> str;

sort(str.begin(), str.end());

for (int i = count(str.begin(), str.end(), '+'); i < str.size(); i++)
{
    str2 += str[i];

    if(i == str.size() - 1)
        break;
    else
        str2 += '+';

}    

cout << str2 << endl;

}