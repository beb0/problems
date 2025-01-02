#include <bits/stdc++.h>
using namespace std;

int main()
{
    bool arr[26] = {false};
    char c;
    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {

        cin >> c;

        if (c >= 97)
        {
            c = c - 32;
            arr[c - 65] = true;
        }
        else
            arr[c - 65] = true;
    }

    for (int i = 0; i < 26; i++)
    {
        if (arr[i] == false)
            return cout << "NO", 0;
    }

    cout << "YES";
}

// char c; int n;
//     set<char> s;

//     cin >> n;

//     for (size_t i = 0; i < n; i++)
//     {
//         cin >> c;
//         if(c >= 97)
//             s.insert(c - 32);
//         else
//             s.insert(c);
//     }

//     if(s.size() == 26)
//         cout << "YES";
//     else
//         cout << "NO";
