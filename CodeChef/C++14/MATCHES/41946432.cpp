#include <bits/stdc++.h>
#include <string>
#define ll long long
using namespace std;

int main() {
     ll t;
     cin>>t;
     while(t--)
     {
          ll a,b,c,f;
          ll sum = 0;
          cin >> a >> b ;
          ll d[10] = {6,2,5,5,4,5,6,3,7,6};
          c = a+b;
          while(c>0){
               f = c%10;
               sum+=d[f];
               c=c/10;
          }
          cout<<sum<<endl;
     }
     return 0;
}