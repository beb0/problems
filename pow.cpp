#include <bits/stdc++.h>
using namespace std;

//calculating power

int pw(int n, int pow)
{
   if(pow == 1)
    return n;
   else
    return n * pw(n, pow - 1); 
}

int main() {
    cout << pw(7, 3);
}