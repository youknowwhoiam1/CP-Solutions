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
const int inf = 1e17;

int mod_add(int a, int b) {a = a % mod; b = b % mod; return (((a + b) % mod) + mod) % mod;}
int mod_mul(int a, int b) {a = a % mod; b = b % mod; return (((a * b) % mod) + mod) % mod;}
int inv(int i) { if (i == 1) return 1; return (mod - ((mod / i) * inv(mod % i)) % mod) % mod;}
int pwr(int a, int b) {a %= mod; int res = 1; while (b > 0) {if (b & 1) res = res * a % mod; a = a * a % mod; b >>= 1;} return res;}
int gcd(int a, int b) { if (b == 0) return a; return gcd(b, a % b);}

string yans = "YES", nans = "NO";

// template ends here //

vector<pair<int, int>> primeFactors(int n) {
	vector<pair<int, int>> fact;
	fact.push_back({ -1, n});
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			int x = 0;
			while (n % i == 0) {
				x++;
				n /= i;
			}
			fact.push_back({ -x, i});
		}
	}
	sort(all(fact));
	return fact;
}

int32_t main() {

	NFS;

	int t = 1;
	cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<pair<int, int>> a = primeFactors(n);
		cout << a[0].second << "\n";
	}

	return 0;
}