#include <bits/stdc++.h> 

using namespace std;

int main() {
	 int t;
	 cin>>t;
	 while(t--)
	 {
	      long long k,n,d;
	      cin>>n>>k>>d;
	      long long a[n];
	      long long sum = 0;
	      for(long long i=0;i<n;i++){
	           cin>>a[i];
	           sum+=a[i];
	      }
	      long long p = sum/k;
	      if(p>d){
	           cout<<d<<endl;
	      }else{
	           cout<<p<<endl;
	      }
	      
	 }
	
	

	return 0;
}