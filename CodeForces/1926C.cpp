#include <bits/stdc++.h>
using namespace std;

//https://codeforces.com/contest/1926/problem/C

int sumofnum(int n)
{
    if(n%10 == n)
        return n;
    else 
        return n%10 + sumofnum(n/10);
}


int main() {

    int n = 200002;
    int arr[n];
    
    arr[0] = 0;

    for (int i = 1; i < n; i++)
        arr[i] = arr[i-1] + sumofnum(i);
    
    int tc; cin >> tc;

    while(tc--)
    {
        int n; cin >> n;
        cout << arr[n] << endl;
    }

}