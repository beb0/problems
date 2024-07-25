#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1, str2; cin >> str1 >> str2;

    for (int i = 0; i < str1.size(); i++)
    {
        if(str1[i] < 97)
            str1[i] = str1[i] + 32;
        
        if(str2[i] < 97)
            str2[i] = str2[i] + 32;

        if(str1[i] == str2[i]) continue;
        else if (str1[i] < str2[i]) return cout << -1, 0;
        else return cout << 1, 0;
        
    }

    cout << 0;
    
}