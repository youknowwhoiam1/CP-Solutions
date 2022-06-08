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
         ll n,o=0;
         cin>>n;
         ll a[n];
         for(ll i=0;i<n;i++){
             cin>>a[i];
         }
         for(ll i=0;i<n;i++){
             if(a[i]%2!=0){
                 o++;
             }
         }
         //cout<<o<<endl;
         if(o%2==0){
             cout<<1<<endl;
         }else{
             cout<<2<<endl;
         }
          
     }
     return 0;
}