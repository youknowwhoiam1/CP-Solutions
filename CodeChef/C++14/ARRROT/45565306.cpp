#include <bits/stdc++.h>
#include <string>
#define int long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

const int mod = 1000000007;

int Mod(int a, int b) {
    int c = a % b;
    return (c < 0) ? c + b : c;
}

signed main() {
    fio;

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    int n; cin>>n;
    int a[n]; int sum = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        sum += a[i];
        sum = Mod(sum,mod);
    }
    int q; cin>>q;
    for(int i=0;i<q;i++){
        int x; cin>>x;
        sum = Mod(sum*2,mod);
        cout<<sum<<endl;
    }
    return 0;
}