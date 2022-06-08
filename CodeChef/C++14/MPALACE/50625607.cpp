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

typedef pair<int, pair<int, int> > ppi;

vector<int> mergeKArrays(vector<vector<int> > arr)
{
	vector<int> output;

	priority_queue<ppi, vector<ppi>, greater<ppi> > pq;

	for (int i = 0; i < arr.size(); i++)
		pq.push({ arr[i][0], { i, 0 } });

	while (pq.empty() == false) {
		ppi curr = pq.top();
		pq.pop();

		int i = curr.second.first;
		int j = curr.second.second;

		output.push_back(curr.first);

		if (j + 1 < arr[i].size())
			pq.push({ arr[i][j + 1], { i, j + 1 } });
	}

	return output;
}

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
		vector<vector<int>> v;
		int tot = 0;
		for (int i = 0; i < n; i++) {
			int m; cin >> m;
			tot += m;
			vector<int> a;
			for (int j = 0; j < m; j++) {
				int x; cin >> x;
				a.push_back(x);
			}
			v.push_back(a);
		}
		vector<int> ans = mergeKArrays(v);
		for (int i = 0; i < ans.size(); i++) {
			cout << ans[i] << " ";
		} cout << "\n";
	}

	return 0;
}
// remove online judge snippet for Google Code Jam