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

	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll a[n];
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		ll sum = 0,flag = 0;
		for(ll i=0;i<n;i++)
		{
			if(a[i]>(i+1)){
				flag = 1;
			}
			else
			sum += (i+1)-a[i];
		}
		if(flag){
			cout<<"Second"<<endl;
		}
		else
		{
			if(sum%2==0){
				cout<<"Second"<<endl;
			}else{
				cout<<"First"<<endl;
			}
		}
	}

	return 0;
}