#include <bits/stdc++.h> 

using namespace std;

int main() {
	 int t;
	 cin>>t;
	 while(t--)
	 {
	      int n;
	      string s;
	      cin>>n;
	      cin>>s;
	      int q = 97;
	      for(int i=0;i<n;i+=4){
	           if(s[i]=='0'){
	                q+=0;
	           }else{
	                q+=8;
	           }
	           if(s[i+1]=='0'){
	                q+=0;
	           }else{
	                q+=4;
	           }
	           if(s[i+2]=='0'){
	                q+=0;
	           }else{
	                q+=2;
	           }
	           if(s[i+3]=='0'){
	                q+=0;
	           }else{
	                q+=1;
	           }
	           cout<<static_cast<char>(q);
	           q=97;
	      }cout<<endl;
      
	 }
	
	

	return 0;
}