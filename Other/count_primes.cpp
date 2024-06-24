#include <bits/stdc++.h>
using namespace std;

bool is_prime(int number, int current)
{
    if (number == current)
        return true;
    else if(!(number%current))
        return false; 
    else 
        return is_prime(number, current + 1);
}

int count_primes(int start, int end)
{
    if(start == end + 1)
        return 0;
    else if(is_prime(start, 2))
        return 1 +  count_primes(start + 1, end);
    else
        return 0 + count_primes(start + 1, end);
}

int main()
{
    cout << count_primes(10,20);
}

