#include <bits/stdc++.h>
#include <string>
#define int long long
#define max3(a,b,c) max(max((a),(b)),(c))
#define max4(a,b,c,d) max(max((a),(b)),max((c),(d)))
#define min3(a,b,c) min(min((a),(b)),(c))
#define min4(a,b,c,d) min(min((a),(b)),min((c),(d)))
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

const int mod = 1000000007;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
     
}

int power(int x, int y, int p)
{
     int res = 1;
     x = x % p;
     while (y > 0)
     {
          if (y & 1)
               res = (res*x) % p;

          y = y>>1;
          x = (x*x) % p;
     }
     return res;
}

signed main() {
    fio;

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int d = power(2,n-1,mod);

        int ans = d%mod;

        cout<<ans<<endl;
    }

    return 0;
}