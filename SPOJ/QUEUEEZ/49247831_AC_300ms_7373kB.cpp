#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin >> t;
    queue<int>q;

    while (t--)
    {
        int n;
        cin >> n;

        switch (n) {
            case 1 :
            {   int inp;
                cin >> inp;
                q.push(inp);
                break;
            }
            case 2:
            {
                if(q.empty())
                    break;
                else
                {
                    q.pop();
                    break;
                }
            }
            case 3:
            {
                if(q.empty())
                {
                    cout << "Empty!" << '\n';
                    break;
                }
                else
                {
                    cout << q.front() << '\n';
                    break;
                }
            }

        }
    }
}
