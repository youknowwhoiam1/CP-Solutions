#include <bits/stdc++.h> 

using namespace std;

int main() {
	 int t;
	 cin>>t;
	 for(int i=0;i<t;i++){
	      long long a,b;
	      cin>>a>>b;
	      long long p = a/2;
	      long long q = a%2;
	      long long r = b/2;
	      long long s = b%2;
	      cout<<((p+q)*(r+s) + p*r)<<endl;
	 }
	 return 0;
}