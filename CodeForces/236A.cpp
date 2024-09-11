#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str, unq_str=""; 

    int count = 0;
    
    cin >> str;

    for(int i = 0; i < str.length(); i++)
    {
        if(unq_str.find(str[i]) == -1)
        {
            unq_str+=str[i];
            count++;
        }
    }

    if(count%2==0)cout<<"CHAT WITH HER!";
    else cout <<"IGNORE HIM!";
    
}