#include <iostream>
using namespace std;

int main()
{
    int n, a, b, sum = 0;
    cin >> n;
    int years[n-1];

    for(int i = 0; i < n - 1 ; i++)
    {
        cin >> years[i];
    }

    cin >> a >> b;

    for (int i = a - 1; i <= b - 2; i++)
    {
        sum += years[i];
    }
    
    cout << sum;

}