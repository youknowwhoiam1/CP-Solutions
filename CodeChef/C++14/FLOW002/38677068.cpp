#include <bits/stdc++.h> 

using namespace std;

int main() {
	int t;
	int x;
	int y;
	int r;
	int n;
	cin >> t;
	for(n=0; n<t; n++){
	     cin >> x >> y;
	     r = x % y;
	     cout << r << endl;
     }
	return 0;
}