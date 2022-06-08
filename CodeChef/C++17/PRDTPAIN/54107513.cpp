#include "bits/stdc++.h"
#include <string>
#define int long long
#define NFS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end() //Forward traversal
#define pb push_back
#define fi first
#define se second
#define max3(a, b, c) max(max((a), (b)), (c))
#define max4(a, b, c, d) max(max((a), (b)), max((c), (d)))
#define min3(a, b, c) min(min((a), (b)), (c))
#define min4(a, b, c, d) min(min((a), (b)), min((c), (d)))
using namespace std;

const int mod = 1e9 + 7;
const int inf = 1e17;

int mod_add(int a, int b) {a = a % mod; b = b % mod; return (((a + b) % mod) + mod) % mod;}
int mod_mul(int a, int b) {a = a % mod; b = b % mod; return (((a * b) % mod) + mod) % mod;}
int inv(int i) { if (i == 1) return 1; return (mod - ((mod / i) * inv(mod % i)) % mod) % mod;}
int pwr(int a, int b) {a %= mod; int res = 1; while (b > 0) {if (b & 1) res = res * a % mod; a = a * a % mod; b >>= 1;} return res;}

signed main() {

    NFS;

    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int p = a[i], q = a[i];
            set<int> k;
            for (int j = i; j < n; j++) {
                k.insert(a[j]);
                p = max(p, a[j]), q = min(q, a[j]);
                if (j - i < 2) {continue;}
                int r = 0;
                auto idx = k.lower_bound((p + q) / 2);
                if (idx != k.end()) {
                    int pp = *idx;
                    r = max(r, (p - pp) * (pp - q));
                }
                if (idx != k.begin()) {
                    idx--;
                    int pp = *idx;
                    r = max(r, (p - pp) * (pp - q));
                }
                ans += r;
            }
        }
        cout << ans << endl;
    }

    return 0;
}