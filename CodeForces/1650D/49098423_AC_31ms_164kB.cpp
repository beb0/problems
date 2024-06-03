#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        int n, count = 0;

        cin >> n;

        deque<int> dq;
        deque<int> counts;

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            dq.push_back(a);
        }

        while (!dq.empty())
        {
            if(dq.back() == dq.size())
            {   
                counts.push_front(count);
                dq.pop_back();
                count = 0;
            }
            else
            {
                dq.push_back(dq.front());
                dq.pop_front();
                count++;
            }
        }

        for(auto i : counts)
            cout << i << " ";
        
        cout << endl;
                
    }
    
}