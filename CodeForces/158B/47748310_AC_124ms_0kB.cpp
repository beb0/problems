#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int one = 0, two = 0, three = 0, four = 0, taxi = 0;
    for (int i = 0; i < n; ++i) {
        int sz;
        cin >> sz;
        if (sz == 1) one++;
        else if (sz == 2) two++;
        else if (sz == 3) three++;
        else four++;
    }

	
	taxi = four;
	
	taxi += three;
	
	taxi += ((two*2)/4) + ((two*2)%4 != 0);
	
	one -= (three + ((two*2)%4));


	if (one > 4) taxi += (one / 4) + (one % 4 != 0);
	else if (one > 0) taxi++;
	
	cout << taxi;


}