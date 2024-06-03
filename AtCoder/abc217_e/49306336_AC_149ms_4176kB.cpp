#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    queue<int> q;
    priority_queue<int, vector<int>, greater<>> pq;

    while (n--) {
        int a;
        cin >> a;

        switch (a) {
            case 1: //append
            {
                int inp;
                cin >> inp;
                q.push(inp);
                break;
            }
            case 2: //print then delete
            {
                if(!pq.empty())
                {
                    cout << pq.top() << '\n';
                    pq.pop();
                }
                else
                {
                    cout << q.front() << '\n';
                    q.pop();
                }
                break;
            }
            case 3: //sort
            {
                while (!q.empty())
                {
                    pq.push(q.front());
                    q.pop();
                }
            }
        }
    }
}