#include <iostream>
using namespace std;

int main ()
{
    int limak, bob, years = 0;

    cin >> limak >> bob;

    if(limak == bob)
        years++;
    else
    {
        while (limak <= bob)
        {
        limak *= 3;
        bob *= 2;

        years++;
        }
    }
    
    cout << years;

    return 0;
}