#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int count = 0, k = 0;

    string str, inp, str1 = "";

    do
    {
        cin >> inp;
        str += inp;

    } while (inp.back() != '}');
    

    for (int i = 0; i < str.size(); i++)
    {   
        
        if((str[i] > 96 && str[i] < 123) && str1.find(str[i]) == -1 )
            {
                count++;
                str1 += str[i];
            }
    }

    cout << count ;
    
}