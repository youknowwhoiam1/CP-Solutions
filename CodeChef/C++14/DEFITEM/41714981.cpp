#include <bits/stdc++.h> 
#define ll long long
using namespace std;

int main() {
	 
	ll t;
	cin>>t;
	while(t--)
	{
	     ll n,q;
	     cin>>n>>q;
	     ll a[n];
	     ll s[1000000001];
	     ll sum = 0;
	     for(ll i=0;i<n;i++){
	          cin>>a[i];
	          sum+=a[i];
	          s[a[i]]=0;
	          if(i==0){
	               s[a[i]]=a[i];
	          }
	          else{
	               s[a[i]] = s[a[i-1]] + a[i];
	          }
	     }
	     while(q--){
	          ll p;
	          cin>>p;
	          ll sumfront = s[p];
	          ll sumback = sum-s[p]+p;
	          if(sumback>=sumfront){
	               cout<<sumfront<<endl;
	          }else{
	               cout<<sumback<<endl;
	          }
	     }
	     
	}
	

	return 0;
}