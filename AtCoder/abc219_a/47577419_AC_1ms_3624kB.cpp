#include <iostream>
using namespace std;

int main(){
	
	int grade;
	
	cin >> grade;
	
	if (grade >= 0 and grade < 40)
		cout<< 40 - grade;
	else if (grade >= 40 and grade < 70)
	   cout<< 70 - grade;
	else if (grade >= 70 and grade < 90)
	   cout<< 90 - grade;
	else if (grade >= 70 and grade < 90)
	   cout<< 90 - grade;
	else
	   cout<< "expert";
 	
	 return 0;
}