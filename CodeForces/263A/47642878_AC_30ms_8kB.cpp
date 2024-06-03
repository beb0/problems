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

    if(row <= 3)
        rowSteps = 3 - row;
    else 
        rowSteps = row - 3;

    if(column <= 3)
        columnSteps = 3 - column;
    else 
        columnSteps = column - 3;

    cout << columnSteps + rowSteps;


    return 0;
}