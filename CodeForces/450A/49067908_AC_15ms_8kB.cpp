#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, child;

    cin >> n >> m;

    deque<int>dqval, dqindex;

    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        dqval.push_back(a);
        dqindex.push_back(i);
    }

    while (!dqval.empty())
    {
        if(dqindex.size() == 1)
        {
            child = dqindex.back();
            break;
        }

        if(m >= dqval.front())
        {
            dqval.pop_front();
            dqindex.pop_front();
        }
        else
        {
            dqval.push_back(dqval.front() - m);
            dqindex.push_back(dqindex.front());

            dqval.pop_front();
            dqindex.pop_front();
        }
    }
    
    cout << child;
    
}