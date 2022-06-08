#include <bits/stdc++.h> 

using namespace std;

int main() {
	 
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	     string S;
	     cin>>S;
	     int n = S.size();
	     int q = 0;
         int p = 0;
	     for(int i=0;i<n;i++){
	          if(S[i]=='0'){
	               p++;
	          }
	     }
	     for(int i=0;i<n;i++){
	          if(S[i]=='1'){
	               q++;
	          }
	     }
         if(p==n || q==n){
             cout<<-1<<endl;
         }else if(n%2==0){
	          if(p>q){
	               cout<<(p-q)/2<<endl;
	          }else if(p<q){
	               cout<<(q-p)/2<<endl;
	          }else{
	               cout<<0<<endl;
	          }
	     }else{
	          cout<<-1<<endl;
	     }
    }
	return 0;
}