#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n, t, k, d;
    cin >> n >> t >> k >> d;

    double without_oven = ceil(n / k) * t;

    int cake = 0, time = 0, line_1 = 0, line_2 = 0, build_time = 0;
    bool built = false;

    while (cake < n)
    {
        time++;
        line_1++;
        build_time++;
        if (built) line_2++;

        if (line_1 == t)
        {
            cake += k;
            line_1 = 0;
        }

        if (build_time == d)
            built = true;

        if (built)
        {
            if (line_2 == t)
            {
                cake += k;
                line_2 = 0;
            }
        }
    }

    if (time < without_oven)
        cout << "YES";
    else
        cout << "NO";

    // cout << "Without: " << without_oven << endl
    //      << "With: " << time;
}