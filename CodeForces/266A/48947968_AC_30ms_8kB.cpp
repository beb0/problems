#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, cnt = 0;

    string str;

    cin >> n;

    cin >> str;

    for (int i = 0; i < str.size() - 1; i++)
    {
        if(str[i] == str[i+1])
            cnt++;
    }
    
    cout << cnt;

}