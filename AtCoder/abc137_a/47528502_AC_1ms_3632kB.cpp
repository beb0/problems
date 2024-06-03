#include <iostream>
using namespace std;

int main(){

    int a, b, sum, sub, mult;
    cin >> a >> b;

    sum = a + b;
    sub = a - b;
    mult = a * b;

    if(sum >= sub && sum >= mult)
       cout << sum << endl; 

    else if (sub >= sum && sub >= mult)
        cout << sub << endl;

    else
        cout << mult << endl;


}