#include <bits/stdc++.h>
#include <string>
#define int long long
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
        int n; cin>>n;
        string s; cin>>s;
        int o=0,z=0,flag=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                o++;
            }else{
                z++;
            }

            if(o>=z){
                flag = 1;
                break;
            }
        }
        if(flag==1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}