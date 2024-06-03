#include <bits/stdc++.h>
using namespace std;

int main ()
{
    string s;

    cin >> s;

    while(s.back() == '0')
        s.pop_back(); 

    string sr = s;
    reverse(sr.begin() , sr.end());
     
    if(s == sr)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

}