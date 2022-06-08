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
          ll n,m;
          cin>>n>>m;
          if((n*m)%2==0){
               cout<<"YES"<<endl;
          }else{
               cout<<"NO"<<endl;
          }
     }
     return 0;
}