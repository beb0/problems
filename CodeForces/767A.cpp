#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int cnt = n;

    priority_queue<int> pq;

    while (cnt--)
    {
        int inp;
        cin >> inp;
        pq.push(inp);

        for (; !pq.empty() && pq.top() == n; pq.pop())
        {
            cout << pq.top() << ' ';
            n--;
        }

        cout << endl;
    }
}