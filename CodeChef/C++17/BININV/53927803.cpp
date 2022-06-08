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

signed main() {

	NFS;

	int t = 1;
	cin >> t;
	while (t--) {
		int n, m; cin >> n >> m;
		vector <pair<int, string>> v;
		int cnt = 0;
		for (int i = 0; i < n ; i++) {
			string s; cin >> s;
			int k = 0;
			for (int j = 0; j < m; j++) {
				if (s[j] == '1') {cnt++; k++;}
			}
			v.push_back({k, s});
		}
		sort(all(v));
		string p = "";
		for (int i = 0; i < n; i++) {
			p = p + v[i].second;
		}
		int q = 0, ans = 0;
		for (int i = n * m - 1; i >= 0; i--) {
			if (p[i] == '1') {
				q++;
			}
			if (p[i] == '0') {
				ans += cnt - q;
			}
		}
		cout << ans << "\n";
	}

	return 0;
}