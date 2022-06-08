#include <bits/stdc++.h> 

using namespace std;

int main() {
     long long t;
     cin>>t;
     while(t--){
          long long n;
          cin>>n;
          string s,p;
          cin>>s;
          cin>>p;
          long long d = 0;
          for(long long i=0;i<n;i++){
               if(s[i]=='1'){
                    d++;
               }
          }
          long long v = 0;
          for(long long i=0;i<n;i++){
               if(p[i]=='1'){
                    v++;
               }
          }
          int count = 0;
          int flag = 1;
          if(d==v){
               for(int i=0;i<n;i++){
                    if(s[i]!=p[i]){
                         if(s[i]=='1'){
                              count++;
                         }else{
                              count--;
                              if(count<0){
                                   flag=0;
                                   break;
                              }
                         }
                    }
               }
               if(count==0 && flag){
                    cout<<"Yes"<<endl;
               }else{
                    cout<<"No"<<endl;
               }
          }
          else{
               cout<<"No"<<endl;
          }
     }     
	return 0;
}