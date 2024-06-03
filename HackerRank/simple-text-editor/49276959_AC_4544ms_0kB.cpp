#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin >> n;

   string s = "";

   stack<int> opsstk, appendSizes;
   stack<string> deleted;

    while (n--)
    {
        int k;
        cin >> k;

        switch (k) {
            case 1://append
            {
                string ns;
                cin >> ns;
                s+=ns;
                appendSizes.push((int)ns.size());
                opsstk.push(1);
                break;
            }
            case 2://delete
            {
                int ds;
                cin >> ds;
                string str = "";
                while (ds--){
                    str += s.back();
                    s.pop_back();
                }
                reverse(str.begin(),str.end());
                deleted.push(str);
                opsstk.push(2);
                break;
            }
            case 3://print
            {
                int ps;
                cin >> ps;
                cout << s[ps-1] << '\n';
                break;
            }
            case 4://undo
            {
                if(!opsstk.empty() && opsstk.top() == 1)//append
                {
                    int todelete = appendSizes.top();
                    while (todelete--)
                    {
                        s.pop_back();
                    }
                    appendSizes.pop();
                    opsstk.pop();
                }
                else //delete
                {
                    s += deleted.top();
                    deleted.pop();
                    opsstk.pop();
                }
                break;
            }


        }
    }
}