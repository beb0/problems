#include <iostream>
using namespace std;

int main()
{
    int cubes, cubesUsed = 0, currCubes = 0, height = 0;

    cin >> cubes;

    if (cubes == 1)
    {
        cout << 1;
    }
    else
    {
        while (cubesUsed < cubes)
        {
            height++;
            currCubes += height;
            cubesUsed += currCubes;

            if (cubesUsed == cubes)
                break;
            else if(cubesUsed > cubes)
            {
                height--;
                break;
            }
            
        }
        cout << height;
    }

    return 0;
}