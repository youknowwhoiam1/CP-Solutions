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

const int N = 2 * 1e5 + 5;
int p = 0, q = 0;

vector<vector<int>> adj(N);
int level[N] = {0};
vector<bool> visited(N, false);
vector<int> c;

void dfs(int v) {
	q += adj[v].size();
	c.push_back(v);
	visited[v] = true;
	for (int u : adj[v]) {
		if (!visited[u]) {
			level[u] = level[v] + 1;
			dfs(u);
		}
	}
}

signed main() {

	NFS;

	int t = 1;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		adj.assign(n + 1, vector<int>(0));
		visited.assign(n + 1, false);
		int u, v;
		for (int i = 0; i < m; i++) {
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		p = 0;
		for (int i = 0; i < n; i++) {
			q = 0;
			if (visited[i + 1] == 0) {
				c.clear();
				dfs(i + 1);
				int pp = c.size();
				if (pp * pp == q + pp) {
					if (pp != n) {
						p++;
					}
				}
			}
		}
		cout << p << "\n";
	}

	return 0;
}