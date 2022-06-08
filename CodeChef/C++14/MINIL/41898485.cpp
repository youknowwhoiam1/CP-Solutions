#include <bits/stdc++.h> 
#define ll long long
using namespace std;

ll minimum(ll n1, ll n2){
     if(n1>=n2){
          return n2;
     }else{
          return n1;
     }
}

int main() {
     
     ll t;
     cin >> t;
     while(t--)
     {
          ll n,m;
          cin >> n >> m ;
          char a[n][m];
          for(ll i=0;i<n;i++){
               for(ll j=0;j<m;j++){
                    cin >> a[i][j];
               }
          }
          /*for(ll i=0;i<n;i++){
               for(ll j=0;j<m;j++){
                    cout << a[i][j];
               }cout << endl;
          }*/
          ll total = n*m;
          ll ans1 = 0;
          ll ans2 = 0;
          for(ll i=0;i<n;i++){
               for(ll j=0;j<m;j++){
                    if((i+j)%2==0 && a[i][j]=='.'){
                         ans1++;
                    }
                    if((i+j)%2==1 && a[i][j]=='*'){
                         ans1++;
                    }
               }
          }
          for(ll i=0;i<n;i++){
               for(ll j=0;j<m;j++){
                    if((i+j)%2==0 && a[i][j]=='*'){
                         ans2++;
                    }
                    if((i+j)%2==1 && a[i][j]=='.'){
                         ans2++;
                    }
               }
          }
          if(total%2==0){
               cout << minimum(ans1,ans2) << endl;
          }else{
               cout << ans1 << endl;
          }
          //cout << ans1 << " " << ans2 << endl;
     }
     
	return 0;
}