#include <bits/stdc++.h> 

using namespace std;

int factorial(int num){
     int fact = 1;
     if(num==0){
          return 1;
     }else
     {
          while(num>0){
          fact = fact * num;
          num = num -1;
          }
     return fact;
     }
     
}

int main() {
     int t,x,i;
     cin >> t;
     for(i=0; i<t; i++)
     {
          cin >> x;
          cout << factorial(x) << endl;
     }
	return 0;
}