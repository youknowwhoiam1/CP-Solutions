#include <bits/stdc++.h> 

using namespace std;

int main() {
     int t;
     cin>>t;
     for(int i=0;i<t;i++){
          long long n,d;
          cin>>n>>d;
          long long a[n];
          for(long long i=0;i<n;i++){
               cin>>a[i];
          }
          long long danger = 0;
          long long normal = 0;
          for(long long i=0;i<n;i++){
               if(a[i]>=80 || a[i]<=9){
                    danger++;
               }else{
                    normal++;
               }
          }
          long long p = danger/d;
          long long q = danger%d;
          long long r = normal/d;
          long long s = normal%d;
          long long u = (q+s)/d;
          long long v = (q+s)%d;
          if(d==1){
               cout<<n<<endl;
          }else if(danger==0){
               if(s==0){
                    cout<<r<<endl;
               }else{
                    cout<<r+1<<endl;
               }
          }else if(normal==0){
               if(q==0){
                    cout<<p<<endl;
               }else{
                    cout<<p+1<<endl;
               }
          }else if(n<=d){
               cout<<2<<endl;
          }else{
               if(q==0 && s==0){
                    cout<<(p+r)<<endl;
               }else if(q==0 && s!=0){
                    cout<<(p+r+1)<<endl;
               }else if(q!=0 && s==0){
                    cout<<(p+r+1)<<endl;
               }else{
                    cout<<(p+r+2)<<endl;
               }
          }
          
     }
	 
	return 0;
}