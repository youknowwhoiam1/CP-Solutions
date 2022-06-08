#include <bits/stdc++.h>
#include <string>
#include <boost/math/common_factor.hpp> 
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long
using namespace std;

bool isPowerOfTwo(ll n) 
{ 
    if (n == 0) 
        return 0; 
    while (n != 1) 
    { 
        if (n%2 != 0) 
            return 0; 
        n = n/2; 
    } 
    return 1; 
} 
 
int main() {
     fio;
     ll t;
     cin>>t;
     while(t--)
     {
        ll n,k,count=0;
        cin>>n>>k;
        ll a[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        for(ll i=0;i<n;i++){
            if(a[i]%k==0){
                count++;
            }
            else{
                ll p = boost::math::lcm(a[i],k);
                // cout << p << endl;
                if(isPowerOfTwo(p/a[i])){
                    count++;
                }
            }
        }
        if(count==n){
             cout<<"YES"<<endl;
        }else{
             cout<<"NO"<<endl;
        }
        
     }
     return 0;
}