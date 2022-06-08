#include <bits/stdc++.h> 
using namespace std;
#define ll long long int
int main() {
	 
	ll t;
	cin>>t;
	int flag;
	while(t--){
	     flag = 0;
	     int x,y,n,k;
	     cin>>x>>y>>k>>n;
	     int a[n][2];
	     for(int i=0;i<n;i++){
	          cin>>a[i][0]>>a[i][1];
	     }
	     for(int i=0;i<n;i++){
	          if((x-y <= a[i][0]) && (k >= a[i][1])){
	               flag = 1;
	               break;
	          }
	     }
	     if(flag==1){
	          cout<<"LuckyChef\n";
	     }else{
	          cout<<"UnluckyChef\n";
	     }
	}
	

	return 0;
}