#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n, r, total = 0, cnt = 0; cin >> n >> r;
    
    while (true)
    {
        if(cnt != 0 && total % 10 == 0)
            break;
        else if(cnt != 0 && total % 10 == r)
            break;

        total += n;
        cnt++;

    }
    
    cout << cnt;

}