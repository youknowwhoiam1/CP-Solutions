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

signed main() {
    fio;

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int t; cin>>t;
    while(t--){
        int x,a,b; cin>>x>>a>>b;
        int ans = ((100-x)*b + a)*10;
        cout<<ans<<endl;
    }
    return 0;
}