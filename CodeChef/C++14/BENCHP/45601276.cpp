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
    
    int t; cin>>t;
    while(t--){
        int n,w,wr;
        cin>>n>>w>>wr;

        int a[n];
        map <int,int> m;
        for(int i=0;i<n;i++){
            cin>>a[i];
            m[a[i]]++;
        }
        if(wr>=w){
            cout<<"YES"<<endl;
        }else{
            int p = w - wr;
            int sum = 0;
            for(int i=0;i<n;i++){
                if(m[a[i]]>=2){
                    if(m[a[i]]%2==1){
                        sum -= a[i];
                    }
                    sum += a[i];
                }
            }
            if(sum>=p){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }
    
    return 0;
}