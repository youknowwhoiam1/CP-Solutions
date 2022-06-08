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
          ll n,k;
          cin>>n>>k;
          ll a[k];
          for(ll i=0;i<k;i++){
               cin>>a[i];
          }
          for(ll i=0;i<n;i++){
               string s;
               cin>>s;
               ll ans=0;
               for(ll j=0;j<k;j++){
                    if(s[j]=='0'){
                         ans+=0;
                    }else{
                         ans+=a[j];
                    }
               }
               cout<<ans<<endl;
          }
     }
     return 0;
}