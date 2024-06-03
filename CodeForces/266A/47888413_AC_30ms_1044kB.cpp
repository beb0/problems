#include <iostream>
using namespace std;

int main()
{
    int n, count = 0;
    string str;

    cin >> n;
    cin >> str;

    for (int i = 1; i < n; i++)
    {
        if (str[i - 1] == str[i])
            count++;
    }

    cout << count << endl;
}