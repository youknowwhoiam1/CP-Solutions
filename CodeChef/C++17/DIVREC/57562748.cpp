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

void solve() {
	int x, a, b;
	cin >> x >> a >> b;
	if (x == 1 and a == 1 and b == 1) {cout << 1 << "\n";}
	else if (x * (b / a) < x and x % a == 0) {cout << (x / a)*(b) << "\n";}
	else {cout << -1 << "\n";}
}

int32_t main() {

	NFS;

	int tc = 1;
	cin >> tc;
	while (tc--) {
		solve();
	}

	return 0;
}