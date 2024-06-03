#include <bits/stdc++.h>
using namespace std;

string readable (string str, int index)
{   //small and odd                            capital and even
    if((str[index] > 91 && index % 2 == 1) || (str[index] < 91 && index % 2 == 0))
        return "No";
    if(index == str.size() - 1)
        return "Yes";
    return readable(str, index + 1);


}

int main()
{
    string str; cin >> str;

    cout << readable(str, 0);
}