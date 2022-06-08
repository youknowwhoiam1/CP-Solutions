#include <bits/stdc++.h> 

using namespace std;

int main() {
     int x,y,r;
     
     cin >> x >> y;
     r = x - y;
     if(r%10==9){
          cout << r-1 << endl;
     }else{
          cout << r+1 << endl;
     }
     
	 
	
	

	return 0;
}