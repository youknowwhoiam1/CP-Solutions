#include <bits/stdc++.h> 

using namespace std;

int main() {
	 
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	     int n;
	     cin>>n;
	     string S;
          cin>>S;
	     int p = 120 - n;
	     int count = 0;
	     for(int i=0;i<n;i++){
             if(S[i]=='1'){
                 count++;
             }
          }
	     if((count+p)>=90){
	          cout<<"YES"<<endl;
	     }else{
	          cout<<"NO"<<endl;
	     }
	}
	

	return 0;
}