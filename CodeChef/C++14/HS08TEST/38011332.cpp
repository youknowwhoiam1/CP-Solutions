#include <iostream>
using namespace std;

int main() {
	int y;
	float x;
	cin >> y;
	cin >> x;
	if(x>=y + 0.5 && y%5 == 0){
	     cout << x-y-0.50 << endl;
	}else{
	     cout << x << endl;
	}
	
	return 0;
}
