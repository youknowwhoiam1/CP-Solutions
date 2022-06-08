#include <bits/stdc++.h>
#include <string>
#define int long long
#define NFS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define all(x) (x).begin(), (x).end() //Forward traversal
#define pb push_back
#define fi first
#define se second
#define max3(a,b,c) max(max((a),(b)),(c))
#define max4(a,b,c,d) max(max((a),(b)),max((c),(d)))
#define min3(a,b,c) min(min((a),(b)),(c))
#define min4(a,b,c,d) min(min((a),(b)),min((c),(d)))
using namespace std;

const int mod = 1e9 + 7;
const int inf = 1e17;

int mod_add(int a, int b) {a = a % mod; b = b % mod; return (((a + b) % mod) + mod) % mod;}
int inv(int i) {if (i == 1) return 1; return (mod - ((mod / i) * inv(mod % i)) % mod) % mod;}

signed main() {

    NFS;

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t = 1;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[n], c = -1, d = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == 0) {
                d++;
            }
            if (a[i] > 0 and c == -1) {
                c = i;
            }
        }
        int f = -1;
        for (int i = n - 1; i >= 0; i--) {
            if (a[i] > 0 and f == -1) {
                f = i;
            }
        }
        if (d == n) {
            cout << 0 << "\n";
        } else {
            int p[n], q[n], r[n], id = -1;
            for (int i = 0; i < n; i++) {
                if (a[i] == 0) {
                    if (id != -1) {
                        p[i] = min(abs(id - i), abs(n - f + i));
                    } else {
                        p[i] = abs(n - f + i);
                    }
                } else {
                    p[i] = 0;
                    id = i;
                }
            }
            id = -1;
            for (int i = n - 1; i >= 0; i--) {
                if (a[i] == 0) {
                    if (id != -1) {
                        q[i] = min(abs(id - i), abs(c + n - i));
                    } else {
                        q[i] = abs(c + n - i);
                    }
                } else {
                    q[i] = 0;
                    id = i;
                }
            }
            for (int i = 0; i < n; i++) {
                r[i] = min(p[i], q[i]);
            }
            int ans = 0;
            for (int i = 0; i < n; i++) {
                if (i == 0) {
                    int x = min(r[n - 1], r[1]);
                    int y = max(r[n - 1], r[1]);
                    int z = r[i] - 1;
                    if (k > x and k <= y) {
                        a[i] += k - x;
                    } else if (k > y) {
                        a[i] += (y - x);
                        a[i] += (k - y) * 2;
                    }
                    if (z > x and z <= y) {
                        a[i] -= z;
                    } else if (z > y) {
                        a[i] -= (y - x);
                        a[i] -= (z - y) * 2;
                    }
                } else if (i == n - 1) {
                    int x = min(r[0], r[n - 2]);
                    int y = max(r[0], r[n - 2]);
                    int z = r[i] - 1;
                    if (k > x and k <= y) {
                        a[i] += k - x;
                    } else if (k > y) {
                        a[i] += (y - x);
                        a[i] += (k - y) * 2;
                    }
                    if (z > x and z <= y) {
                        a[i] -= z;
                    } else if (z > y) {
                        a[i] -= (y - x);
                        a[i] -= (z - y) * 2;
                    }
                } else {
                    int x = min(r[i - 1], r[i + 1]);
                    int y = max(r[i - 1], r[i + 1]);
                    int z = r[i] - 1;
                    if (k > x and k <= y) {
                        a[i] += k - x;
                    } else if (k > y) {
                        a[i] += (y - x);
                        a[i] += (k - y) * 2;
                    }
                    if (z > x and z <= y) {
                        a[i] -= z;
                    } else if (z > y) {
                        a[i] -= (y - x);
                        a[i] -= (z - y) * 2;
                    }
                }
            }
            for (int i = 0; i < n; i++) {
                ans += a[i];
            }
            cout << ans << "\n";
        }
    }

    return 0;
}
// remove online judge snippet for Google Code Jam