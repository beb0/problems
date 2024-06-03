#include <iostream>
using namespace std;

int main()
{
    int n ;
    cin >> n;

    while (n--)
    {
        string str;
        cin >> str;


        for (int i = 1; i < str.size() - 1; i++)
            str.erase(i,1); 
        
        cout << str << endl;
    }
}