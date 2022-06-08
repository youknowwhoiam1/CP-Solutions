#include <bits/stdc++.h> 

using namespace std;

int reversDigits(int num) 
{ 
    int rev_num = 0; 
    while(num > 0) 
    { 
        rev_num = rev_num*10 + num%10; 
        num = num/10; 
    } 
    return rev_num; 
}

int main() {
     int t,x,p,r,n,result;
     cin >> t;
     for(n=0; n<t; n++){
          cin >> x;
          r = x % 10;
          p = reversDigits(x) % 10;
          result = p + r;
          cout << result << endl;
     }
	 
	return 0;
}