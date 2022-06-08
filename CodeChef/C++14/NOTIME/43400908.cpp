#include <bits/stdc++.h>
#include <string>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long
using namespace std;

int main() {

// 	#ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// 	#endif

	//ll t;
	//cin>>t;
	//while(t--)
	//{
	ll n,h,x;
	cin>>n>>h>>x;
	ll a[n];
	for(ll i=0;i<n;i++){
		cin>>a[i];
	}
	int ans = 0;
	for(ll i=0;i<n;i++){
		if((a[i]+x)>=h){
			ans = 1;
			break;
		}
	}
	if(ans){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
	//}

	return 0;
}