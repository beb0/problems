#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, position = 1;
    cin >> n >> m;

    queue<int>candies, positions;

    while (n--)
    {
        int a;
        cin >> a;
        candies.push(a);
        positions.push(position);
        position++;
    }

    while (candies.size() > 1)
    {
        if(candies.front() > m)
        {
            candies.push(candies.front() - m);
            candies.pop();
            positions.push(positions.front());
            positions.pop();
        }
        else
        {
            candies.pop();
            positions.pop();
        }
    }

    cout << positions.front() << endl;

}