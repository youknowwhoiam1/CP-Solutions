#include <bits/stdc++.h> 

using namespace std;

int main() {
     int n,i,x;
     cin >> n;
     for(i=0; i<n; i++)
     {
          cin >> x;
          if(x%2==0){
               cout << x/2 + 1 <<endl;
          }else if(x%2==1){
               cout << (x+1)/2 <<endl;
          }
     }
          
     
	 
	
	

	return 0;
}