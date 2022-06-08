#include <bits/stdc++.h> 

using namespace std;

int main() {
	 
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	     int x,y,k,n;
	     cin>>x>>y>>k>>n;
	     int p = (x-y)%k;
	     int q = (x-y)/k;
	     if(p==0){
	          if(q%2==0){
	               cout<<"Yes"<<endl;
	          }
              else{
                  cout<<"No"<<endl;
              }
	     }else{
	          cout<<"No"<<endl;
	     }
	}
	return 0;
}