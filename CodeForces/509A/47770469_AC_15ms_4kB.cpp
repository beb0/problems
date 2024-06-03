#include <iostream>
using namespace std;

int main()
{
    int num;

    cin >> num;

    int arr[num][num] = {};


    for(int row = 0; row < num; row++)
    {
        for(int column = 0; column < num; column++)
        {
            if (row == 0 || column == 0)
                arr[row][column] = 1;
            else
                arr[row][column] = arr[row-1][column] + arr[row][column-1];
        }

    }
    cout << arr[num - 1][num - 1];

    return 0;
}

