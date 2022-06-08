#include <bits/stdc++.h>
#include <string>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long
using namespace std;
 
signed main() {
     fio;
     int t;
     cin>>t;
     while(t--)
     {
          int n; cin >> n;
          int a[n];
          for(int i=0;i<n;i++){
               cin>>a[i];
          }
          int count = 0, flag = 0;
          for(int i=0;i<n-1;i++){
               if(a[i]>a[i+1]){
                    count++;
                    for(int j=i+2;j<n;j++){
                         if(a[j]>a[i]){
                              flag = 1;
                              break;
                         }
                    }
               }
               if(flag){
                    break;
               }
          }
          if(flag){
               cout<<"NO"<<endl;
          }else{
               cout<<"YES"<<endl;
               cout<<count<<endl;
          }
     }
     return 0;
}