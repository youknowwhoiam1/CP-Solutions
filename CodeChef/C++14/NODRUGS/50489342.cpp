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
		int n, k, l;
		cin >> n >> k >> l;
		int a[n];
		int mx = -1;
		map<int, int> m;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			mx = max(mx, a[i]);
			m[a[i]]++;
		}
		if (a[n - 1] < mx) {
			int x = mx - a[n - 1];
			if (x < k * (l - 1) and k > 0) {
				cout << "Yes" << "\n";
			} else {
				cout << "No" << "\n";
			}
		} else {
			if (a[n - 1] == mx and m[mx] == 1) {
				cout << "Yes" << "\n";
			} else {
				int x = a[n - 1] - mx;
				if (x < k * (l - 1) and k > 0) {
					cout << "Yes" << "\n";
				} else {
					cout << "No" << "\n";
				}
			}
		}
	}

	return 0;
}
// remove online judge snippet for Google Code Jam