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
     	ll c,j,i=0,sum=0,rest=0;
     	cin>>c;
     	ll a[30];
     	while(c>0)
		{
		  ll r = c%2;
		  c/=2;
		  a[i++] = r;
		}
		ll d = pow(2,i-1);
		//cout<<d<<endl;
		/*for(j=i-1;j>=0;j--){
			cout<<a[j];
		}cout<<endl;*/
		for(j=i-2;j>=0;j--){
			if(a[j]==0){
				sum += pow(2,j);
			}
			else{
				rest += pow(2,j);
			}
		}
		//cout << sum << " " << rest << endl;
		cout << (sum+rest)*(sum+d) << endl;
	}
	return 0;
}