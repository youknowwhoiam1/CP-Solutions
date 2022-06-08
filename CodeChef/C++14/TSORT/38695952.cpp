#include <bits/stdc++.h> 

using namespace std;

int main() {
     int  t,n;
     cin >> t;
     int myNum[t];
     
     for(n=0; n<t; n++){
          cin >> myNum[n];
          
     }
     sort(myNum,myNum+t);
     for(n=0; n<t; n++){
          cout << myNum[n] << endl;
     }
     
	 return 0;
}