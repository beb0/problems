#include <iostream>
using namespace std;

int main()
{
    int n, people, capacity, count = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> people >> capacity;
        if (capacity-people >= 2) count++;
    }

    cout << count;

    return 0;
}