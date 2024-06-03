#include <iostream>
using namespace std;

int main() {

    int count, finalcount = 0;

    cin >> count;

    for (int i = 1; i <= count; i++)
    {
        finalcount += i;
    }
    
    cout << finalcount << endl;

    return 0;

}