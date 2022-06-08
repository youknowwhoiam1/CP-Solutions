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
          ll n,m=0;
          cin>>n;
          ll a[n];
          for(ll i=0;i<n;i++){
               cin>>a[i];
          }
          sort(a,a+n);
          for(ll i=1;i<n-1;i++){
               m = max(m,(abs(a[i]-a[0])+abs(a[n-1]-a[i])));
          }
          cout<<m+abs(a[n-1]-a[0])<<endl;
     }
     return 0;
}