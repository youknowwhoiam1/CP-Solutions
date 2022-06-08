#include <bits/stdc++.h>
#include <string>
#define int long long
#define NFS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define all(x) (x).begin(), (x).end() //Forward traversal
#define max3(a,b,c) max(max((a),(b)),(c))
#define max4(a,b,c,d) max(max((a),(b)),max((c),(d)))
#define min3(a,b,c) min(min((a),(b)),(c))
#define min4(a,b,c,d) min(min((a),(b)),min((c),(d)))
using namespace std;

const int mod = 1e9 + 7;
const int inf = 1e17;

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

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n];
        int m = 1e10;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            m = min(m, a[i]);
        }
        int flag = 0, c = 0;
        for (int i = 0; i < n; i++) {
            if (m == a[i]) {
                continue;
            } else if (m < floor(a[i] / 2) and a[i] % 2 == 0) {
                c++;
                continue;
            } else if (m <= floor(a[i] / 2) and a[i] % 2 != 0) {
                c++;
                continue;
            } else {
                flag = 1;
            }
        }
        if (flag) {
            cout << n << "\n";
        } else {
            cout << c << "\n";
        }
    }

    return 0;
}