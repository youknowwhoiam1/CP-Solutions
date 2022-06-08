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
        ll n;
        cin>>n;
        char s[n];
        ll total0 = 0, total1 = 0;
        for(ll i=0;i<n;i++){
            cin >> s[i];
            if(s[i]=='1'){
                total1++;
            }else{
                total0++;
            }
        }
        ll current0 = 0, current1 = 0;
        ll ans = min(total0,total1);
        for(ll i=0;i<n;i++){
            if(s[i]=='1'){
                current1++;
            }else{
                current0++;
            }
            ans = min(ans, current1 + (total0 - current0));
        }
        cout << ans << endl;
     }
     return 0;
}