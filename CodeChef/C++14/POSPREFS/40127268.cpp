#include <bits/stdc++.h> 

using namespace std;

int main() {
	 int t;
	 cin>>t;
	 while(t--)
	 {int n,k;
	 cin>>n>>k;
	 if(n%2==0){
	      if(n==k){
     	      for(int i=1;i<=n;i++){
     	           cout<<i<<" ";
     	      }
     	 }
     	 else if((n-k)<n/2){
     	      int p =2*(n-k);
     	      for(int i=1;i<=p;i++){
          	      if(i%2==0){
          	           cout<<i<<" ";
          	      }else{
          	           cout<<-i<<" ";
          	      }
               }
               for(int i=p+1;i<=n;i++){
                    cout<<i<<" ";
               }
     	 }else if((n-k)>n/2){
     	      int q = 2*k;
     	      for(int i=1;i<=q;i++){
     	           if(i%2==0){
          	           cout<<i<<" ";
          	      }else{
          	           cout<<-i<<" ";
          	      }
     	      }for(int i=q+1;i<=n;i++){
     	           cout<<-i<<" ";
     	      }
     	      
     	 }else{
     	      for(int i=1;i<=n;i++){
     	           if(i%2==0){
          	           cout<<i<<" ";
          	      }else{
          	           cout<<-i<<" ";
          	      }
     	      }
     	 }
	 }else{
	      if(n==k){
     	      for(int i=1;i<=n;i++){
     	           cout<<i<<" ";
     	      }
     	 }
     	 else if((n-k)<(n/2)+0.5){
     	      int p =2*(n-k);
     	      for(int i=1;i<=p;i++){
          	      if(i%2==0){
          	           cout<<i<<" ";
          	      }else{
          	           cout<<-i<<" ";
          	      }
               }
               for(int i=p+1;i<=n;i++){
                    cout<<i<<" ";
               }
     	 }else if((n-k)>(n/2)+0.5){
     	      int q = 2*k;
     	      for(int i=1;i<=q;i++){
     	           if(i%2==0){
          	           cout<<i<<" ";
          	      }else{
          	           cout<<-i<<" ";
          	      }
     	      }for(int i=q+1;i<=n;i++){
     	           cout<<-i<<" ";
     	      }
     	      
     	 }else{
     	      for(int i=1;i<=n;i++){
     	           if(i%2==0){
          	           cout<<i<<" ";
          	      }else{
          	           cout<<-i<<" ";
          	      }
     	      }
     	 }
	 }cout<<endl;}
	 
	return 0;
}