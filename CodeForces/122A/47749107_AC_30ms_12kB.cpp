#include <iostream>
using namespace std;

int main() {
  
  int num;
  cin >> num;
  
  for(int i = 1; i <= num; i++)
  {
  	
	  if(num%i ==0)
  		{
		  	
		  int x = i;
		  bool lucky = true;
		  
	  
	  while (x)
	  {
	  		int digit = x%10;
	  
	  		if(digit == 4 || digit == 7)
			  {
			  		x/=10;	
				  continue;
			  }
			  else 
			  {
			  	lucky = false;
			  	break;
			  }
			 
			  
			 
	  }
	  
	  if(lucky) 
	  {cout << "YES";
	  return 0;}
	  
	  }
  	
	 
  }
  
  cout <<"NO";

}