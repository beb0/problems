#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, d;

    cin >> n >> d;

    deque<int> dq;

    while (n--)
    {
        int a;
        cin >> a;
        dq.push_back(a);
    }

    while (d--)
    {
        dq.push_back(dq.front());
        dq.pop_front();
    }

    for(auto i : dq)
        cout << i << " ";
    


}