#include <iostream>
using namespace std;

int main ()
{

    long long n, k;

    cin >> n >> k;

    while (k--)
    {
        if(n%10)
            n--;
        else
            n /= 10;
    }
    
    cout << n;

    return 0;
}