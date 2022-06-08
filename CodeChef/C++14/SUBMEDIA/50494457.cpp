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
		int n, k;
		cin >> n >> k;
		int a[n], c[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			c[i] = a[i];
		}
		sort(a, a + n);
		int id = (k - 1) / 2 + n - k;
		cout << a[id] << "\n";
		int p, q = id - (k + 1) / 2;
		if (q < 0) {
			p = -1;
		} else {
			p = a[id - (k + 1) / 2];
		}
		vector<int> v;
		for (int i = 0; i < n; i++) {
			if (c[i] > p) {
				v.push_back(c[i]);
			}
		}
		for (int i = 0; i < v.size(); i++) {
			cout << v[i] << " ";
		} cout << "\n";
	}

	return 0;
}
// remove online judge snippet for Google Code Jam