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
          ll n,p=0,ans=1;
          cin>>n;
          ll a[n];
          map <ll,ll> m;
          for(ll i=0;i<n;i++){
               cin>>a[i];
               m[a[i]]++;
          }
          sort(a,a+n);
          for(ll i=n-1;i>=0;i--){
               if(m[a[i]]>=2){
                    if(m[a[i]]>=4 && p==0){
                         ans=a[i]*a[i];
                         p+=2;
                         break;
                    }else{
                         ans*=a[i];
                         i-=m[a[i]]-1;
                         p++;
                    }
               }
               if(p==2){
                    break;
               }
          }
          if(p<2){
               cout<<-1<<endl;
          }else{
               cout<<ans<<endl;
          }
          
     }
     return 0;
}