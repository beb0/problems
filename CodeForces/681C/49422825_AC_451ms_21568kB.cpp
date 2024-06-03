#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    vector<pair<string, int>> ans;
    priority_queue<int, vector<int> , greater<int>> pq;

    while(t--)
    {
        int l;
        string s;
        cin >> s;
        if(s == "insert")
        {
            cin >> l;
            pq.push(l);
            ans.push_back({s, l});
        }
        else if(s == "getMin")
        {
            cin >> l;
            while(!pq.empty() and pq.top() < l)
                pq.pop(), ans.push_back({"removeMin",2e9});
            if(pq.empty() or pq.top() > l)
            {
                pq.push(l);
                ans.push_back({"insert",l});
            }
            ans.push_back({s, l});
        }
        else
        {
            if(pq.empty())
            {
                ans.push_back({"insert", 0});
            }
            else
            {
                pq.pop();
            }
            ans.push_back({s, 2e9});
        }
    }

    cout << ans.size() << '\n';
    for(auto i : ans)
    {
        cout << i.first;
        if(i.second != 2e9)
            cout << ' ' << i.second;
        cout << '\n';
    }
}