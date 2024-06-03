#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string inp;
    bool reverse = false;
    deque<int> dq;
    cin >> n;

    while (n--)
    {
        cin >> inp;

        if (inp == "back")
        {
            if (dq.empty())
                cout << "No job for Ada?" << endl;
            else
            {
                if (reverse)
                {
                    cout << dq.front() << endl;
                    dq.pop_front();
                }
                else
                {
                    cout << dq.back() << endl;
                    dq.pop_back();
                }
            }
        }
        else if(inp == "front")
        {
            if (dq.empty())
                cout << "No job for Ada?" << endl;
            else
            {
                if (reverse)
                {
                    cout << dq.back() << endl;
                    dq.pop_back();
                }
                else
                {
                    cout << dq.front() << endl;
                    dq.pop_front();
                }
            }            
        }
        else if(inp == "reverse")
        {           
            reverse = !reverse;        
        }
        else if(inp == "toFront")
        {
            int N;

            cin >> N;

            if (reverse)
            {
                dq.push_back(N);
            }
            else
            {
                dq.push_front(N);
            }
                
        }
        else if(inp == "push_back")
        {
            int N;

            cin >> N;

            if (reverse)
            {
                dq.push_front(N);
            }
            else
            {
                dq.push_back(N);
            }
              
        }
        
    }
}