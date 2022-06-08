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
		int n, k;
		cin >> n >> k;
		if (k == 0) {
			cout << "YES" << "\n";
			cout << 0 << "\n";
		} else if (k % 2 == 0) {
			cout << "NO" << "\n";
		} else {
			int m = 0;
			while (pow(2, m) - 1 < k) {
				m++;
			}
			int r = pow(2, m) - 1;
			int p = (r + k) / 2, q = (r - k) / 2;
			vector<int> a, b;
			while (p) {
				a.push_back(p % 2);
				p /= 2;
			}
			while (q) {
				b.push_back(q % 2);
				q /= 2;
			}
			vector<int> x, y;
			int g = 0;
			for (int i = 0; i < a.size(); i++) {
				if (a[i] == 1) {
					x.push_back(pow(2, g));
				}
				g++;
			}
			g = 0;
			for (int i = 0; i < b.size(); i++) {
				if (b[i] == 1) {
					y.push_back(pow(2, g));
				}
				g++;
			}
			int pp = x.size(), qq = y.size();
			int id_x = pp - 1, id_y = qq - 1;
			vector<pair<int, int>> ans;
			while (pp != 0 or qq != 0) {
				if (k >= x[id_x] and id_x >= 0) {
					ans.push_back({x[id_x], k - x[id_x] + 1});
					k -= x[id_x];
					id_x--; pp--;
				} else {
					ans.push_back({y[id_y], k + 1});
					k += y[id_y];
					id_y--; qq--;
				}
			}
			cout << "YES" << "\n";
			sort(all(ans));
			cout << ans.size() << "\n";
			for (int i = 0; i < ans.size(); i++) {
				cout << ans[i].second << "\n";
			}
		}
	}

	return 0;
}