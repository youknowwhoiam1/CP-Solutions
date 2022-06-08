#include <bits/stdc++.h> 

using namespace std;

int RNum(int num){
     int rev_num;
     rev_num = 0;
     while(num > 0){
          rev_num = rev_num*10 + num%10;
          num = num / 10;
     }
     return rev_num;
     
}

int main() {
     int t,x,n;
     cin >> t;
     for(n=0; n<t; n++){
          cin >> x;
          cout << RNum(x) << endl;
     }
	 
	
	

	return 0;
}