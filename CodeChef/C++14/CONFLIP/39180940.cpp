#include <bits/stdc++.h> 

using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	     int n;
	     cin>>n;
	     for(int i=0;i<n;i++){
	          int l,g,q;
	          cin>>l>>g>>q;
	          if(l==1){
	               if(g%2==0){
	                    cout<<g/2<<endl;
	               }else{
	                    if(l==q){
	                         cout<<(g-1)/2<<endl;
	                    }else{
	                         cout<<(g+1)/2<<endl;
	                    }
	               }
	          }else{
	               if(g%2==0){
	                    cout<<g/2<<endl;
	               }else{
	                    if(l==q){
	                         cout<<(g-1)/2<<endl;
	                    }else{
	                         cout<<(g+1)/2<<endl;
	                    }
	               }
	          }
	     }
	}
	return 0;
}