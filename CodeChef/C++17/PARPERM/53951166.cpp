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


vector<bool>prime(100005, true);

void sieve() {
	int i, j;
	prime[1] = false;
	for (int i = 2; i <= 100005; i++)
	{
		if (prime[i])
		{
			for (int j = i * i; j <= 100005; j += i)
			{
				prime[j] = false;
			}
		}
	}
}

signed main() {

	NFS;

	int t = 1;
	sieve();
	cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		int p = 0, q = 0;
		vector<int> a, v;
		for (int i = 1; i <= n; i++) {
			if (i == 1) {
				v.push_back(i);
				q++;
			} else if (prime[i] and n / i == 1) {
				v.push_back(i);
				q++;
			} else {
				p++;
				a.push_back(i);
			}
		}
		if (k < p and k > q) {
			cout << "No" << "\n";
		} else {
			cout << "Yes" << "\n";
			if (k >= p) {
				for (int i = 0; i < p; i++) {
					cout << a[i] << " ";
				}
				for (int i = 0; i < k - p; i++) {
					cout << v[i] << " ";
				} cout << "\n";
			} else if (k < p  and k <= q) {
				for (int i = 0; i < k; i++) {
					cout << v[i] << " ";
				} cout << "\n";
			}
		}

	}


	return 0;
}