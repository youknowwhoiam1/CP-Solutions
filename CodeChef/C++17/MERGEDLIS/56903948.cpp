#include "bits/stdc++.h"
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
const int inf = 1e18;

int mod_add(int a, int b) {a = a % mod; b = b % mod; return (((a + b) % mod) + mod) % mod;}
int mod_mul(int a, int b) {a = a % mod; b = b % mod; return (((a * b) % mod) + mod) % mod;}
int inv(int i) { if (i == 1) return 1; return (mod - ((mod / i) * inv(mod % i)) % mod) % mod;}
int pwr(int a, int b) {a %= mod; int res = 1; while (b > 0) {if (b & 1) res = res * a % mod; a = a * a % mod; b >>= 1;} return res;}
int gcd(int a, int b) { if (b == 0) return a; return gcd(b, a % b);}

string yans = "YES", nans = "NO";

// template ends here //

int solve(vector<int>& v) {
	if (v.size() == 0)
		return 0;

	vector<int> tail(v.size(), 0);
	int length = 1;

	tail[0] = v[0];

	for (int i = 1; i < v.size(); i++) {

		auto b = tail.begin(), e = tail.begin() + length;
		auto it = lower_bound(b, e, v[i] + 1);

		if (it == tail.begin() + length)
			tail[length++] = v[i];
		else
			*it = v[i];
	}

	return length;
}

int32_t main() {

	NFS;

	int tt = 1;
	cin >> tt;
	while (tt--) {
		int n, m; cin >> n >> m;
		vector<int> a(n), b(m);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for (int i = 0; i < m; i++) {
			cin >> b[i];
		}
		int ans = solve(a) + solve(b);
		cout << ans << "\n";
	}

	return 0;
}