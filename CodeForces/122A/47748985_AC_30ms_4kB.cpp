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
	  		if(x%10 != 4 and x%10 != 7)
			  {
			  	lucky = false;
				  break;
			  }
			  
			  x/=10;
	  }
	  
	  if(lucky) 
	  {cout << "YES";
	  return 0;}
	  
	  }
  	
	 
  }
  
  cout <<"NO";

}