#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c;
    cin >> c;
    string inp;
    cin >> inp;

    string str = "qwertyuiopasdfghjkl;zxcvbnm,./";

    for (int i = 0; i < inp.size(); i++)
    {
        for (int j = 0; j < str.size(); j++)
        {
            if(inp[i] == str[j])
            {
                if(c == 'R')
                cout << str[j-1];
                else
                cout << str[j+1];

                break;
            }
                            
        }
        
    }
    
}