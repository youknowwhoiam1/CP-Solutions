#include <bits/stdc++.h> 

using namespace std;

int main() {
     int t,x,n,result,r;
     cin >> t;
     for(n=0; n<t; n++){
          result = 0;
          cin >> x;
          while(x>0){
               r = x % 10;
               x /= 10;
               result += r;
          }
     cout << result << endl;
          
     }
	return 0;
}