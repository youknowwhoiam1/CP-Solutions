#include <bits/stdc++.h>
#include <string>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long
using namespace std;
 
int main() {
     fio;
     ll t;
     cin>>t;
     while(t--)
     {
          float m,h;
          cin>>m>>h;
          float ans = m/(h*h);
          if(ans<=18){
               cout<<1<<endl;
          }else if(ans>18 && ans<=24){
               cout<<2<<endl;
          }else if(ans>24 && ans<=29){
               cout<<3<<endl;
          }else if(ans>=30){
               cout<<4<<endl;
          }
     }
     return 0;
}