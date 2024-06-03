#include <iostream>
using namespace std;

int main() {

    int n, first, second, third, temp;

    cin >> n;
    //since that its just three numbers we have to only check for the first and last
    first = n/100;
    temp = n%100;
    second = temp / 10;
    third = temp %  10;

    if ((third*100) + (second*10) + first == n)
    cout << "Yes" << endl;
    else
    cout << "No" << endl;


    // The Solution
    // int n, first, third;

    // cin >> n;

    // first = n/100;
    // third = n %  10;

    // if (first == third)
    // cout << "Yes" << endl;
    // else
    // cout << "No" << endl;



    return 0;
}
