#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int sums[t] = {};

    for (int i = 0; i < t; i++)
    {
        int n, k, sum = 0;
        
        cin >> n >> k;

        int arr_a[n];
        int arr_b[n];

        for (int j = 0; j < n; j++)
            cin >> arr_a[j];

        for (int j = 0; j < n; j++)
            cin >> arr_b[j];

        //sorting arr
        for (int k = 0; k < n; k++)
        {
            int temp = arr_a[k], temp2;
            bool sorted = true;

            for (int l = k; l < n; l++)
            {   
                if (arr_a[l] < temp)
                {
                    temp = arr_a[l];
                    temp2 = l;
                    sorted = false;
                }
                
            }
            if (sorted == false)
            {
                arr_a[temp2] = arr_a[k];
                arr_a[k] = temp;
            }
                      
        }

                //sorting arr
        for (int k = 0; k < n; k++)
        {
            int temp = arr_b[k], temp2;
            bool sorted = true;

            for (int l = k; l < n; l++)
            {   
                if (arr_b[l] > temp)
                {
                    temp = arr_b[l];
                    temp2 = l;
                    sorted = false;
                }
                
            }
            if (sorted == false)
            {
                arr_b[temp2] = arr_b[k];
                arr_b[k] = temp;
            }
                       
        }

        for (int m = 0; m < n; m++)
        {   
            if(arr_b[m] > arr_a[m] && k)
                {
                    sum += arr_b[m];
                    k--;
                }
            else
                sum += arr_a[m];

        }

        sums[i] = sum;
                
    }

    for (int i = 0; i < t; i++)
        cout << sums[i] << endl;
    
    
}