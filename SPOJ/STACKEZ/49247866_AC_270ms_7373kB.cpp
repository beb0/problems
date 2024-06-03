#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    stack<int>stk;

    while (t--)
    {
        int n;
        cin >> n;

        switch (n) {
            case 1 :
            {   int inp;
                cin >> inp;
                stk.push(inp);
                break;
            }
            case 2:
            {
                if(stk.empty())
                    break;
                else
                {
                    stk.pop();
                    break;
                }
            }
            case 3:
            {
                if(stk.empty())
                {
                    cout << "Empty!" << '\n';
                    break;
                }
                else
                {
                    cout << stk.top() << '\n';
                    break;
                }
            }

        }
    }
}
