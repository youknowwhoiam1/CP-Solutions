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
const int INF = 1e17;

int mod_add(int a, int b) {a = a % mod; b = b % mod; return (((a + b) % mod) + mod) % mod;}
int inv(int i) {if (i == 1) return 1; return (mod - ((mod / i) * inv(mod % i)) % mod) % mod;}

signed main() {

	NFS;

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t = 1;
	// cin >> t;
	while (t--) {
		int N, K, S; cin >> N >> K >> S;
		vector<vector<pair<int, int>>> adj(N + K);

		for (int x = 0; x < N; x++) {
			int i; cin >> i; i--;
			adj[N + i].push_back({x, 0});
		}

		for (int x = 0; x < N; x++) {
			for (int k = 0; k < K; k++) {
				int c; cin >> c;
				if (c != -1) adj[x].push_back({N + k, c});
			}
		}

		vector<int> dist(N + K, INF); dist[S - 1] = 0;

		priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
		pq.push({0, S - 1}); // dist, node

		while (!pq.empty()) {
			auto [c, u] = pq.top();
			pq.pop();

			if (c != dist[u]) continue;

			for (auto [v, w] : adj[u]) {
				if (dist[u] + w < dist[v]) {
					dist[v] = dist[u] + w;
					pq.push({dist[v], v});
				}
			}
		}

		for (int x = 0; x < N; x++) {
			if (dist[x] == INF) dist[x] = -1;
			cout << dist[x] << " ";
		}
		cout << "\n";
	}

	return 0;
}
// remove online judge snippet for Google Code Jam