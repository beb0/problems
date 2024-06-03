#include <iostream>
using namespace std;

int main()
{
    int t , count = 1;

    cin >> t;

    string magnets[t];

    for (int i = 0; i < t; i++)
    {
        string inp = "";

        cin >> inp;

        magnets[i] = inp;

        if(i > 0){
            if(magnets[i-1] == magnets[i])
                continue;
            else
                count++;
            
        }
    }
    
    cout << count;
}