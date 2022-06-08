#include <bits/stdc++.h>
#include <string>
#define int long long
#define NFS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb push_back
#define f first
#define s second
#define all(x) (x).begin(), (x).end() //Forward traversal
#define max3(a,b,c) max(max((a),(b)),(c))
#define max4(a,b,c,d) max(max((a),(b)),max((c),(d)))
#define min3(a,b,c) min(min((a),(b)),(c))
#define min4(a,b,c,d) min(min((a),(b)),min((c),(d)))
using namespace std;

const int mod = 1e9 + 7;
const int inf = 1e17;
const int N = 1e6 + 1;

// #undef assert
// #define assert(x) if(!(x))while(true);

#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
// debug & operator << (debug & dd, P p) { dd << "(" << p.x << ", " << p.y << ")"; return dd; }

signed main() {

    NFS;

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t = 1;
    cin >> t;
    while (t--) {
        int n, k, x;
        cin >> n >> k >> x;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int ans = 0;
        sort(a, a + n);
        int ok = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (i > 0 and k > 0 and ok == 0) {
                if (a[i] + a[i - 1] > x) {
                    ans += x;
                    i--; k--;
                } else {
                    ans += a[i];
                    ok = 1;
                }
            } else {
                ans += a[i];
            }
            // cout << ans << "\n";
        }
        cout << ans << "\n";
    }

    return 0;
}

// remove online judge snippet for Google Competitions