#include <iostream>
using namespace std;

int main() {

    long long n, m, a, nNum, mNum;

    cin >> n >> m >> a;

    nNum = n / a;
    mNum = m / a;

    if (n%a)
    nNum += 1;

    if(m%a)
    mNum +=1;

    cout << nNum * mNum << endl; 

    return 0;
}