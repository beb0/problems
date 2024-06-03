#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 0;

    vector<int> ones, twos, threes;
    vector<int> ans_ones, ans_twos, ans_threes;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int t;

        cin >> t;

        switch (t)
        {
        case 1:
            ones.push_back(i);
            break;
        case 2:
            twos.push_back(i);
            break;
        case 3:
            threes.push_back(i);
            break;
        }
    }

    if (ones.empty() || twos.empty() || threes.empty())
        cout << 0 << endl;
    else
    {
        while (!ones.empty() && !twos.empty() && !threes.empty())
        {
            ans_ones.push_back(ones.back());
            ones.pop_back();

            ans_twos.push_back(twos.back());
            twos.pop_back();

            ans_threes.push_back(threes.back());
            threes.pop_back();

            count++;
        }

        cout << count << endl;

        for (int i = 0; i < count; i++)
            cout << ans_ones[i] << " " << ans_twos[i] << " " << ans_threes[i] << endl;
    }
}