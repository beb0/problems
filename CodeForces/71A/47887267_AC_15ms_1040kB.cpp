#include <iostream>
using  namespace std;

int main ()
{
    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string str; 

        cin >> str;

        if(str.size() > 10)
            cout << str.front() << str.size() - 2 << str.back() << endl;
        else
            cout << str << endl;                
    }
    
}