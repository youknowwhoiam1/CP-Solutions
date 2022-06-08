#include <bits/stdc++.h> 
#define ll long long
using namespace std;

int main() {
	 
	int t;
	cin >> t;
	while(t--)
	{
	     int n,k;
	     cin >> n >> k;
	     int ans = 0;
	     for(int i=0;i<n;i++){
	          int x;
	          cin>>x;
	          int p = x+k;
	          if(p%7==0){
	               ans++;
	          }
	     }
	     cout << ans << endl;
	}
	

	return 0;
}