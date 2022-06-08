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
	int n; cin >> n;
	string s; cin >> s;
	if (n % 2) {cout << nans << "\n";}
	else {
		map<char, int> mp;
		int mx = -1;
		vector<char> v;
		for (int i = 0; i < n; i++) {
			if (mp[s[i]] == 0) {v.push_back(s[i]);}
			mp[s[i]]++; mx = max(mp[s[i]], mx);
		}
		if (mx > n / 2) {cout << nans << "\n";}
		else {
			int cnt = 0, idx;
			string p = "";
			string q = "";
			for (int i = 0; i < v.size(); i++) {
				if (mp[v[i]] + cnt <= n / 2) {
					for (int j = 0; j < mp[v[i]]; j++) {
						p += v[i];
					}
					cnt += mp[v[i]];
				} else {
					for (int j = cnt + 1; j <= n / 2; j++) {
						p += v[i];
					}
					mp[v[i]] -= (n / 2 - cnt);
					cnt = n / 2; idx = i;
					break;
				}
				// cout << p << " " << cnt << "\n";
			}
			// cout << idx << "\n";
			for (int i = idx; i < v.size(); i++) {
				for (int j = 0; j < mp[v[i]]; j++) {
					q += v[i];
				}
				cnt += mp[v[i]];
			}
			reverse(all(q));
			cout << yans << "\n";
			cout << p << q << "\n";
		}
	}
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