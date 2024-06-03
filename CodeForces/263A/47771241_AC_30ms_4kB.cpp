#include <iostream>
using namespace std;

int main ()
{
    int x, row, column, rowSteps = 0, columnSteps = 0; 

    for(int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cin >> x;
            if (x==1)
            {
                row = i;    
                column = j;
            }
        }
        
    }

    cout << abs(row - 3) + abs (column - 3);


    return 0;
}