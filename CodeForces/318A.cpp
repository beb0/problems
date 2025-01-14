#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, index; cin >> n >> index;
     
    if(index > ceil(float(n)/2)) cout << (index - (ceil(float(n)/2))) * 2 ;
    else cout << (index*2) - 1;
}