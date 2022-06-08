#include <bits/stdc++.h> 

using namespace std;

int main() {
	 
	long long t;
	cin>>t;
	while(t--)
	{
	     long long n,k,x,y;
	     cin>>n>>k>>x>>y;
	     if(x==y){
	          cout<<n<<" "<<n<<endl;
	     }
	     else{
	          while(x!=n && y!=n)
     	     {
     	          x++;
     	          y++;
     	     }
     	     long long q = k%4;
     	     if(x==n){
     	         if(q==1){
     	              cout<<x<<" "<<y<<endl;
     	         }
     	         else if(q==2){
     	              cout<<y<<" "<<x<<endl;
     	         }
     	         else if(q==3){
     	              cout<<0<<" "<<x-y<<endl;
     	         }
     	         else{
     	              cout<<x-y<<" "<<0<<endl;
     	         }
     	     }else{
     	         if(q==1){
     	              cout<<x<<" "<<y<<endl;
     	         }
     	         else if(q==2){
     	              cout<<y<<" "<<x<<endl;
     	         }
     	         else if(q==3){
     	              cout<<y-x<<" "<<0<<endl;
     	         }
     	         else{
     	              cout<<0<<" "<<y-x<<endl;
     	         }
     	     }
	     }
	}
	return 0;
}