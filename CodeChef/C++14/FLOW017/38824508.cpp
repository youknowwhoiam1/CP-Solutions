#include <bits/stdc++.h> 

using namespace std;

int main() {
     int n,a[3],i;
     cin >> n;
     for(i=0; i<n; i++)
     {
          cin >> a[0] >> a[1] >> a[2];
     
          sort(a,a+3);
     
          cout << a[1] << endl; 
     }
	 
	
	

	return 0;
}