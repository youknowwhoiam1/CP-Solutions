#include <bits/stdc++.h>
#include <string>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long
using namespace std;

void solve(int a, int y, int x){
     int ans;
     if(a>=y){
          ans = y*x;
     }else{
          ans = a*x + 1;
     }
     cout << ans << endl;
}

signed main() {
     fio;
     int t;
     cin>>t;
     while(t--)
     {
          int a,y,x;
          cin>>a>>y>>x;
          solve(a,y,x);
     }
     return 0;
}