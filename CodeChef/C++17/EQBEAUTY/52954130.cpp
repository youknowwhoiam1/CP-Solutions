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
int inv(int i) { if (i == 1) return 1; return (mod - ((mod / i) * inv(mod % i)) % mod) % mod;}

signed main() {

	NFS;

	int t = 1;
	cin >> t;
	while (t--) {
		int n; cin >> n;
		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a, a + n);
		if (n == 2) {
			cout << 0 << "\n";
		} else if (n == 3) {
			cout << min(a[1] - a[0], a[2] - a[1]) << "\n";
		} else {
			int pp = 1, qq = n - 2, p = 0, q = 0;
			for (int i = 0; i < n - 1; i++) {
				p += abs(a[i] - a[(n - 1) / 2]);
			}
			for (int i = 1; i < n; i++) {
				q += abs(a[i] - a[1 + (n - 1) / 2]);
			}
			int x, y;
			int z = min(p, q);
			while (pp < qq) {
				x = a[n - 1] - a[pp], y = a[qq] - a[0];
				z = min(z, abs(x - y));
				if (x > y) {
					pp++;
				} else {
					qq--;
				}
			}
			cout << z << "\n";
		}
	}

	return 0;
}