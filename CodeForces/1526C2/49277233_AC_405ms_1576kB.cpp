#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, health = 0, count;
    cin >> n;
    priority_queue <long long, vector<long long>, greater<long long>> pq;
    count = n;
    for (long long i = 0; i < n; ++i) {
        long long a;
        cin >> a;
        if(a < 0)
            pq.push(a);
        health += a;

        if (health < 0 && !pq.empty())
        {
            health -= pq.top();
            pq.pop();
            count--;
        }
    }

    cout << count << '\n';
}