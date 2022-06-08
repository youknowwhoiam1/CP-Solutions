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
		int n, k; cin >> n >> k;
		vector<int> a(n);
		map<int, int> mp;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			mp[a[i]]++;
		}
		int itr = -1;
		map<int, int> m;
		int cnt = 0;
		for (int i = 0; i < n - 1; i++) {
			if (a[i] != a[i + 1]) {
				cnt++;
			}
		}
		for (int i = 0; i < n - 1; i++) {
			if (a[i] != a[i + 1]) {
				if (itr != a[i + 1] and itr != -1) {
					m[a[i + 1]]++;
					itr = a[i];
				} else {
					m[a[i]]++;
					m[a[i + 1]]++;
					itr = a[i];
				}
			}
		}
		for (int i = 1; i <= n; i++) {
			if (mp[i] > 0) {
				cout << cnt - m[i] << " ";
			}
		} cout << "\n";
	}

	return 0;
}