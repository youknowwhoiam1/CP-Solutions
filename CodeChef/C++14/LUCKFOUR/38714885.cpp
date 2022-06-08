#include <bits/stdc++.h> 

using namespace std;

int main() {
     int t,x,result,n,r;
     cin >> t;
     for(n=0; n<t; n++){
          result = 0;
          cin >> x;
          while(x>0){
               r = x % 10;
               x /= 10;
               if(r==4){
                    result += 1;
               }
               
          }
          cout << result << endl;
     }
	 
	
	

	return 0;
}