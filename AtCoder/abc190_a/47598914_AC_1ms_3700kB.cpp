#include <iostream>
using namespace std;

int main(){
	
	int takahashi, aoki, c;
	
	cin >> takahashi >> aoki >> c;
	
	if (c == 0)
		{
			if(takahashi == aoki)
				cout << "Aoki";
			else if(takahashi > aoki)
				cout << "Takahashi";
			else
				cout << "Aoki";
	   }
	else 
		{
			if(takahashi == aoki)
				cout << "Takahashi";
			else if(aoki > takahashi)
				cout << "Aoki";
			else
				cout << "Takahashi";
		
		}
 	
	 return 0;
}

