#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    int wires[num] = {};

    for (int i = 0; i < num; i++)
        cin >> wires[i];

    int m;
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        int wire, bird;
        cin >> wire >> bird;
        wire--;

        if(wire - 1 < 0)
            {
                wires[wire + 1] += wires[wire] - bird;
                wires[wire] = 0;
            }
        else if(wire + 1 >= num )
            {
                wires[wire - 1] += bird - 1;
                wires[wire] = 0;
            }
        else
        {
            wires[wire - 1] += bird - 1;
            wires[wire + 1] += wires[wire] - bird;
            wires[wire] = 0;
        }

    }

    for (int i = 0; i < num; i++)
        cout << wires[i] << endl;
    
}