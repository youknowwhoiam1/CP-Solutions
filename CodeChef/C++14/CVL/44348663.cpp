#include <bits/stdc++.h>
#include <string>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long
using namespace std;
 
signed main() {
     fio;
     int n,t;
     cin>>n>>t;
     int a[n];
     for(int i=0;i<n;i++){
          cin>>a[i];
     }
     int sum = 0;
     for(int i=0;i<n;i++){
          sum+=a[i];
     }
     int p = (t/sum)*n;
     int q = t%sum;
     int m = INT_MAX;
     for(int i=0;i<n;i++){
          m = min(m,a[i]);
     }
     while(q>=m){
          for(int i=0;i<n;i++){
               if(a[i]>q){
                    continue;
               }else if(a[i]==q){
                    q=0;
                    p++;
                    break;
               }else if(q>a[i]){
                    q-=a[i];
                    p++;
               }
          }
     }
     
     cout<<p<<endl;
     return 0;
}