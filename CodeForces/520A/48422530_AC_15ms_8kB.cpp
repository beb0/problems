#include <iostream>
using namespace std;

int main ()
{
    string str;
    int n, cnt = 0;

    cin >> n;
    cin >> str;
    
    for (int j = 0; j < 26; j++)
    {
        if(str.find('a' + j) != string::npos || str.find('A' + j) != string::npos)
            cnt++;
    }

    if(cnt == 26)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    
}