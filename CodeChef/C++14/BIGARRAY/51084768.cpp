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
		int n, s;
		cin >> n >> s;
		int p = (n * (n + 1)) / 2, ok = 0;
		if ((p - s) <= n and (p-s)>0) {
			cout << p - s << "\n";
			ok = 1;
		}
		if (ok == 0) {
			cout << -1 << "\n";
		}
	}

	return 0;
}
// remove online judge snippet for Google Code Jam