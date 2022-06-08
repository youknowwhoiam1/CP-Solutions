#include <bits/stdc++.h> 
#define ll long long
using namespace std;

int main() {
     
     ll t;
     cin >> t;
     while(t--)
     {
          ll n,m;
          cin >> n >> m ;
          char a[n][m];
          char b[n][m];
          char c[n][m];
          for(ll i=0;i<n;i++){
               for(ll j=0;j<m;j++){
                    cin >> a[i][j];
               }
          }
          for(ll i=0;i<n;i++){
               for(ll j=0;j<m;j++){
                    if((i+j)%2==0){
                         b[i][j]='*';
                    }else{
                         b[i][j]='.';
                    }
               }
          }
          for(ll i=0;i<n;i++){
               for(ll j=0;j<m;j++){
                    if((i+j)%2!=0){
                         c[i][j]='*';
                    }else{
                         c[i][j]='.';
                    }
               }
          }
          ll countodd = 0;
          ll counteven = 0;
          if((n*m)%2!=0){
               for(ll i=0;i<n;i++){
                    for(ll j=0;j<m;j++){
                         if(a[i][j]==c[i][j]){
                              countodd++;
                         }
                    }
               }
               cout<<countodd<<endl;
          }else{
               for(ll i=0;i<n;i++){
                    for(ll j=0;j<m;j++){
                         if(a[i][j]==c[i][j]){
                              countodd++;
                         }
                    }
               }
               for(ll i=0;i<n;i++){
                    for(ll j=0;j<m;j++){
                         if(a[i][j]==b[i][j]){
                              counteven++;
                         }
                    }
               }
               cout<<min(counteven,countodd)<<endl;
          }
     }
     
	return 0;
}