#include <bits/stdc++.h> 
#define ll long long
using namespace std;

int main() {
	ll N = 1000001;
	bool prime[N + 1];
     memset(prime, true, sizeof(prime));
 
     for (ll p = 2; p * p <= N; p++)
     {
         if (prime[p] == true) 
         {
             for (ll i = p * p; i <= N; i += p)
                 prime[i] = false;
          }
     }
	
	ll ans[N] = {0};
	ll count=0;
	for(ll i=5;i<=N;i++)
     {
          if(prime[i] && prime[i-2]){
               count++;
          }
          ans[i]=count;
     }
     
     ll t;
     cin >> t;
     while(t--){
          ll n;
          cin >> n;
          cout << ans[n] << endl;
     }
	return 0;
}