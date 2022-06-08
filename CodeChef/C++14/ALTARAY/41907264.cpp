#include <bits/stdc++.h> 
#define ll long long
using namespace std;

int main() {
	 
	ll t;
	cin >> t;
	while(t--)
	{
	     ll n,p=0,q=0,r=0;
	     cin >> n;
	     ll a[n],ans[n];
	     for(ll i=0;i<n;i++){
	          cin >> a[i];
	     }
	     for(ll i=n-1;i>=0;i--)
	     {
	          if(a[i]>0){
	               p++;
	               if(q!=0){
	                    q--;
	               }
	          }else{
	               q++;
	               if(p!=0){
	                    p--;
	               }
	          }
	          if(p==2){
	               r=1;
	               ans[i]=r;
	               p=1;
	          }else if(q==2){
	               r=1;
	               ans[i]=r;
	               q=1;
	          }else{
	               r++;
	               ans[i]=r;
	          }
	     }
	     for(ll i=0;i<n;i++){
	          cout << ans[i] << " ";
	     }cout << endl;
	}
	

	return 0;
}