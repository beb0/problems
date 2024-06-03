#include <bits/stdc++.h>
using namespace std;

int main() {

    int n , top;
    
    cin >> n >> top;

    while (n--)
    {   
        int a, b;
        
        cin >> a >> b;

        if(top == a || top == (7-a) || top == b || top == (7-b))
        
        return cout << "NO", 0;
    }

    cout << "YES";
    
}