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
          ll n,count=0;
          cin>>n;
          ll w[n],l[n],pos[10000];
          for(ll i=0;i<n;i++){
               cin>>w[i];
               pos[w[i]]=i;
          }
          for(ll i=0;i<n;i++){
               cin>>l[i];
          }
          sort(w,w+n);
          for(ll i=1;i<n;i++){
               if(pos[w[i]]<=pos[w[i-1]]){
                    for(ll j=1;j<100;j++){
                         if((pos[w[i]]+(l[pos[w[i]]])*j)>pos[w[i-1]]){
                              pos[w[i]] = pos[w[i]]+(l[pos[w[i]]])*j;
                              count+=j;
                              //cout<<count<<" "<<pos[w[i]]<<endl;
                              break;
                         }
                    }
               }
          }
          cout<<count<<endl;
     }
     return 0;
}