#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str, newstr = ""; cin >> str;
    int captital = 0 , small = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if(str[i] < 91)
            captital++;
        else
            small++;
    }
    
    if (small >= captital)
    {
        for (int i = 0; i < str.size(); i++)
        {
            if(str[i] < 91)
                newstr += str[i] + 32;
            else
                newstr += str[i];
        }
    }
    else
    {
        for (int i = 0; i < str.size(); i++)
        {
            if(str[i] > 91)
                newstr += str[i] - 32;
            else
                newstr += str[i];
        }
    }

    cout << newstr;
}