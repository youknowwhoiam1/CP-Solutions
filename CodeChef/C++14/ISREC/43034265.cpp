#include <bits/stdc++.h>
#include <string>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long
using namespace std;
 
int main() {
     fio;
     ll t;
     cin>>t;
     while(t--)
     {
          ll n,m,count=0;
          
          cin>>n>>m;
          ll p=n+1,q=0,r=m+1,s=0;
          char a[n][m];
          for(ll i=0;i<n;i++){
               for(ll j=0;j<m;j++){
                    cin>>a[i][j];
                    if(a[i][j]=='1'){
                         count++;
                    }
               }
          }
          for(ll i=0;i<n;i++){
               for(ll j=0;j<m;j++){
                    if(a[i][j]=='1'){
                         p = min(p,i);
                         s = max(s,i);
                         q = max(q,j);
                         r = min(r,j);
                    }
               }
          }
          /*cout<<s<<" "<<p<<" "<<r<<" "<<q<<endl;*/
          ll area = (s-p+1)*(q-r+1);
        // cout<<area<<" "<<count<<endl;
          if(area==count){
              cout<<"YES"<<endl;
          }
          else
          {
              cout<<"NO"<<endl;
          }
     }
     return 0;
}