#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; 

    cin >> n;

    int arr[n];

    vector<int> pos, neg, zer;
    
    for (int i = 0; i < n; i++)
    {
        int a; 

        cin >> a;

        if(a == 0)
            zer.push_back(a);
        else if(a > 0)
            pos.push_back(a);
        else 
            neg.push_back(a);
    }

    if(pos.empty())
    {
        pos.push_back(neg.back());
        neg.pop_back();
        pos.push_back(neg.back());
        neg.pop_back();
    }

    if(neg.size() % 2 == 0)
    {
        zer.push_back(neg.back());
        neg.pop_back();
    }   

    cout << neg.size() << " ";
   for(auto i : neg)
    cout << i << " ";
   cout << endl;

   cout << pos.size() << " ";
   for(auto i : pos)
    cout << i << " ";
   cout << endl;

   cout << zer.size() <<" ";
   for(auto i : zer)
    cout << i << " ";    
    
}