#include <bits/stdc++.h>
using namespace std;

bool is_prefix(string main, string prefix, int start_pos = 0)
{
    if(start_pos == prefix.length())
        return true;
    else if(main[start_pos] != prefix[start_pos])
        return  false;
    else return is_prefix(main, prefix, start_pos+1);
}

int main()
{
    // bool is_prefix(string main, string prefix, int start_pos = 0)

    // E.g. is_prefix(“abcdefgh”, “abcd”) ⇒ true
    // E.g. is_prefix(“abcdefgh”, “”) ⇒ true
    // E.g. is_prefix(“abcdefgh”, “abd”) ⇒ false

    cout 
    << is_prefix("abcdefgh", "abcd", 0) 
    << endl 
    << is_prefix("abcdefgh", "", 0)
    << endl
    << is_prefix("abcdefgh", "abd", 0);



}