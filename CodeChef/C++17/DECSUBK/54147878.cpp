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
int gcd(int a, int b) { if (b == 0) return a; return gcd(b, a % b);}

int lis(vector<int> arr) {
    int n = arr.size();
    int lis[n];

    lis[0] = 1;
    for (int i = 1; i < n; i++) {
        lis[i] = 1;
        for (int j = 0; j < i; j++)
            if (arr[i] >= arr[j] && lis[i] < lis[j] + 1)
                lis[i] = lis[j] + 1;
    }
    return *max_element(lis, lis + n);
}

signed main() {

    NFS;

    int t = 1;
    cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        vector<int> a(n);
        bool ok = true;
        map<int, int> m;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            m[a[i]]++;
            if (m[a[i]] > k) {
                ok = false;
            }
        }
        if (ok) {
            sort(all(a));
            int maxi[n + 2];
            maxi[n + 1] = 0;
            for (int i = n; i >= 1; i--) {
                maxi[i] = max(maxi[i + 1], m[i + 1]);
            }
            vector<int> res, v;
            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= n; j++) {
                    v.clear();
                    int c1 = 0;
                    if (res.size()) {
                        for (int l = 0; l < res.size(); l++) {
                            if (res[l] <= j) {
                                v.push_back(res[l]);
                            }
                        }
                    }
                    if (v.size()) {
                        c1 = lis(v);
                    }
                    if (m[j] and c1 + 1 + maxi[j] <= k) {
                        res.push_back(j);
                        m[j]--;
                        for (int g = n; g >= 1; g--) {
                            maxi[g] = max(maxi[g + 1], m[g + 1]);
                        }
                        break;
                    }
                }
            }
            for (int i = n; i >= 1; i--) {
                while (m[i]) {
                    res.push_back(i);
                    m[i]--;
                }
            }
            for (int i = 0; i < n; i++) {
                cout << res[i] << " ";
            } cout << "\n";
        } else {
            cout << -1 << "\n";
        }
    }

    return 0;
}