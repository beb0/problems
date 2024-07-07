#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    string s; cin >> s;

    int Acnt, Dcnt;
    Acnt = count(s.begin(), s.end(), 'A');
    Dcnt = count(s.begin(), s.end(), 'D');

    if(Acnt > Dcnt)
    cout << "Anton";
    else if (Dcnt > Acnt)
    cout << "Danik";
    else
    cout << "Friendship";
}