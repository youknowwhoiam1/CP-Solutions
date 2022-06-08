#include <bits/stdc++.h> 

using namespace std;

int main() {
     int t;
     cin>>t;
     for(int i=0;i<t;i++){
          long long n,r,q;
          cin>>n;
          long long a[n+1];
          for(int p=1;p<=n;p++)
               cin>>a[p];
               
          
          cin>>r;
          q=a[r];
          sort(a+1,a+n+1);
          for(int s=1;s<=n;s++){
               if(a[s]==q){
                    cout<<s;break;
               }
          }cout<<endl;
     }
	 
	
	

	return 0;
}