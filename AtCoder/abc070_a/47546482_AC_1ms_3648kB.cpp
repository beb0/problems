#include <iostream>
using namespace std;

int main() {

    int n, first, third;

    cin >> n;

    first = n/100;
    third = n %  10;

    if (first == third)
    cout << "Yes" << endl;
    else
    cout << "No" << endl;



    return 0;
}