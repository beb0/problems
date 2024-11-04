#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n;

    vector<int> ones, twos, threes;

    for (int i = 0; i < n; i++)
    {
        cin >> x;

        if (x == 1)
            ones.push_back(i + 1);
        else if (x == 2)
            twos.push_back(i + 1);
        else
            threes.push_back(i + 1);
    }

    int tn = min(threes.size(), min(ones.size(), twos.size()));

    if (tn > 0)
    {
        cout << tn << endl;

        for (int i = 0; i < tn; i++)
        {
            cout << ones.back() << " " << twos.back() << " " << threes.back() << endl;
            ones.pop_back(); 
            twos.pop_back(); 
            threes.pop_back();
        }
    }
    else 
    cout << 0;
}