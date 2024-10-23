#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str; cin >> str;
    char current = 'a';
    int rotations = 0;

    for (int i = 0; i < str.size(); i++)
    {
        int diff = abs(str[i] - current);
        if(diff <= 13)
        {
            rotations += diff;
            current = str[i];
        }
        else
        {
            rotations += abs(diff - 26);
            current = str[i];
        }
    }

    cout << rotations;
    
}