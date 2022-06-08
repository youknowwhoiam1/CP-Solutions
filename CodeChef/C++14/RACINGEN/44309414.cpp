#include <bits/stdc++.h>
#include <string>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long
using namespace std;

void solve(){
     int x,r,m;
     cin>>x>>r>>m;
     
     if(r>m){
          cout<<"NO"<<endl;
          return;
     }
     
     int rs = r*60;
     int ms = m*60;
     
     if(x>=rs && r<=m){
         cout<<"YES"<<endl;
         return;
     }
     
     rs -= x; ms -= x;
     
     if(2*rs<=ms){
         cout<<"YES"<<endl;
     }else{
         cout<<"NO"<<endl;
     }
}

signed main() {
     fio;
     int t;
     cin>>t;
     while(t--)
     {
          solve();
     }
     return 0;
}