#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, d;
    queue<int>q;

    cin >> n >> d;

    while (n--)
    {
        int a;
        cin >> a;
        q.push(a);
    }

    while (d--)
    {
        q.push(q.front());
        q.pop();
    }

    while (!q.empty())
    {
        cout << q.front() << ' ';
        q.pop();
    }
}
