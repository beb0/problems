#include <iostream>
using namespace std;

int main()
{
    int set = 0;

    while (true)
    {
        int n, targetHeight = 0, count = 0, needed = 0;

        cin >> n;

        int arr[n];

        if(n == 0)
            return 0;
        
        set++;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            count += arr[i];
        }

        targetHeight = count / n;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] > targetHeight)
            {
                needed += arr[i] - targetHeight;
            }
            
        }
        
        cout << "Set #" << set << endl;
        cout << "The minimum number of moves is " << needed << "." << endl;
        cout << endl;

    }
    
}