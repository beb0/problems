#include <bits/stdc++.h>
using namespace std;

//3n+1 sequence steps count

int threeNplus1(int n)
{
    if(n==1)
        return 1;
    
    if(n%2)
        return 1 + threeNplus1(3*n + 1);
    else
        return 1 + threeNplus1(n/2);
}

int main() {
    cout << threeNplus1(6);
}