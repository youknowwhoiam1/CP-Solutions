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
          ll n,o=0,e=0;
          cin>>n;
          ll a[n];
          for(ll i=0;i<n;i++){
               cin>>a[i];
               //cout<<a[i]<<endl;
          }
          for(ll i=0;i<n;i++){
               if(a[i]%2==0){
                    e++;
               }else{
                    o++;
               }
          }
          if(e>o){
               cout<<o<<endl;
          }else{
               cout<<e<<endl;
          }
     }
     return 0;
}