#include <bits/stdc++.h>
#include <string>
#define int long long
#define NFS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb push_back
#define f first
#define s second
#define all(x) (x).begin(), (x).end() //Forward traversal
#define max3(a,b,c) max(max((a),(b)),(c))
#define max4(a,b,c,d) max(max((a),(b)),max((c),(d)))
#define min3(a,b,c) min(min((a),(b)),(c))
#define min4(a,b,c,d) min(min((a),(b)),min((c),(d)))
using namespace std;

const int mod = 1e9 + 7;
const int inf = 1e17;
const int N = 2 * 1e5 + 1;

// #undef assert
// #define assert(x) if(!(x))while(true);

#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
// debug & operator << (debug & dd, P p) { dd << "(" << p.x << ", " << p.y << ")"; return dd; }

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
		int a[n], b[n - 1];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for (int i = 0; i < n - 1; i++) {
			cin >> b[i];
		}
		sort(a, a + n);
		sort(b, b + n - 1);
		int p = b[0] - a[0], q = b[n - 2] - a[n - 1];
		int ans;
		if (p <= 0) {
			p = 1e15;
		}
		if (q <= 0) {
			q = 1e15;
		}
		if (p == q) {
			ans = p;
		} else {
			if (n == 2) {
				ans = min(p, q);
			} else {
				if ((b[0] - a[0] == b[1] - a[1]) and (b[n - 2] - a[n - 1] != b[n - 3] - a[n - 2])) {
					ans = p;
				} else if ((b[0] - a[0] != b[1] - a[1]) and (b[n - 2] - a[n - 1] == b[n - 3] - a[n - 2])) {
					ans = q;
				} else {
					ans = min(p, q);
				}
			}
		}
		cout << ans << "\n";
	}

	return 0;
}