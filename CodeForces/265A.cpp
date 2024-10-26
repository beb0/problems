#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str, instructions;
    int index = 0;

    cin >> str >> instructions;

    for (int i = 0; i < instructions.size(); i++)
    {
        if(instructions[i] == str[index])
            index ++;
    }

    cout << index+1;
}