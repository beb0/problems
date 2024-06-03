#include <iostream>
using namespace std;

int main ()
{
    int n, x = 0; 
    string operation;

    cin >> n;

    while (n--)
    {   
        cin >> operation;

        if(operation == "X++" || operation == "++X")
            x++;
        else if(operation == "X--" || operation == "--X")
            x--;
        
    }

    cout << x;
    
}