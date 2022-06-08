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

signed main() {

	NFS;

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t = 1;
	cin >> t;
	while (t--) {
		int n; cin >> n;
		string s; cin >> s;
		int x, y; cin >> x >> y;

		int pr[n], sf[n];
		int c = 0, d = 0;
		pr[0] = 0, sf[0] = 0;
		for (int i = 1; i <= n; i++) {
			if (s[n - i] == 'S') {
				c += min(3 * y, x);
			} else if (s[n - i] == 'N') {
				c += min(y, 3 * x);
			} else if (s[n - i] == 'W') {
				c += 0;
			} else if (s[n - i] == 'E') {
				c += min(2 * x, 2 * y);
			}
			pr[i] = c;
		}
		for (int i = 1; i <= n; i++) {
			if (s[i - 1] == 'N') {
				d += min(3 * y, x);
			} else if (s[i - 1] == 'S') {
				d += min(y, 3 * x);
			} else if (s[i - 1] == 'E') {
				d += 0;
			} else if (s[i - 1] == 'W') {
				d += min(2 * x, 2 * y);
			}
			sf[i] = d;
		}
		int ans = 1e15;
		for (int i = 0; i <= n; i++) {
			// cout << pr[n - i] << " " << sf[i] << "\n";
			ans = min(ans, pr[n - i] + sf[i]);
		}
		cout << ans << "\n";
	}

	return 0;
}
// remove online judge snippet for Google Code Jam