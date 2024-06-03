#include <iostream>
using namespace std;

int main()
{
    int n, k, count = 0;

    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        string  s;
        cin >> s;

        int sz = k + 1;

        for (int j = 0; j <= k; j++)
        {   int found = s.find(to_string(j));         
            if(found != -1)
                sz--;       
        }

        if(sz == 0)
            count++;
    }

    cout << count;
    
}