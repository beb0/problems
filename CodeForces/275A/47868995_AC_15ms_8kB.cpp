#include <iostream>
using namespace std;

int main ()
{
    int input_arr[5][5], initial_arr[5][5];

    
    for (int i = 1; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> input_arr[i][j];
            input_arr[i][j] %= 2;
            initial_arr[i][j] = 1;
        }
        
    }


    for (int i = 1; i < 4; i++) 
    {
        for (int j = 0; j < 4; j++)
        {
            if (input_arr[i][j] == 1)
            {
                if(initial_arr[i][j] == 1) initial_arr[i][j] = 0; else initial_arr[i][j] = 1;  
                if(initial_arr[i+1][j] == 1) initial_arr[i+1][j] = 0; else initial_arr[i+1][j] = 1;  
                if(initial_arr[i-1][j] == 1) initial_arr[i-1][j] = 0; else initial_arr[i-1][j] = 1;  
                if(initial_arr[i][j+1] == 1) initial_arr[i][j+1] = 0; else initial_arr[i][j+1] = 1;  
                if(initial_arr[i][j-1] == 1) initial_arr[i][j-1] = 0; else initial_arr[i][j-1] = 1;  
            }
            
        }
        
    }


    for (int i = 1; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << initial_arr[i][j];
        }

        cout << endl;
        
    }
    
}