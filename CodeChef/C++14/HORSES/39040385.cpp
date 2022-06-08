#include <bits/stdc++.h> 

using namespace std;

int main() {
     int t,n,q;
     int r[n-1];
     int s[n];
     cin>>t;
     for(int i=0; i<t; i++){
          cin>>n;
          for(int p=0; p<n; p++){
               cin>>s[p];
          }
          sort(s,s+n);
          for(q=0; q<n-1; q++){
               r[q]=s[q+1]-s[q];
          }
          sort(r,r+n-1);
          cout<<r[0]<<endl;
     }
     return 0;
}