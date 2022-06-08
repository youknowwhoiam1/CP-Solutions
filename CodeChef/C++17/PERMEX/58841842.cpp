#include "bits/stdc++.h"
#define int long long
#define NFS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end() //Forward traversal
#define pb push_back
#define ff first
#define ss second
#define nl "\n"
#define max3(a, b, c) max(max((a), (b)), (c))
#define max4(a, b, c, d) max(max((a), (b)), max((c), (d)))
#define min3(a, b, c) min(min((a), (b)), (c))
#define min4(a, b, c, d) min(min((a), (b)), min((c), (d)))
#define foR(i, p, q) for(int i = p; i < q; i++)
#define printVec(a) for(int i = 0; i < a.size(); i++){cout << a[i] << " ";}
using namespace std;

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x<<" "; _print(x); cerr << endl;
#else
#define debug(x);
#endif

void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

//-----------------------------------------------------------------------------------------------------------------------------//

const int mod = 1e9 + 7;
const int inf = 1e18;

int mod_add(int a, int b) {a = a % mod; b = b % mod; return (((a + b) % mod) + mod) % mod;}
int mod_mul(int a, int b) {a = a % mod; b = b % mod; return (((a * b) % mod) + mod) % mod;}
int inv(int i) { if (i == 1) return 1; return (mod - ((mod / i) * inv(mod % i)) % mod) % mod;}
int pwr(int a, int b) {a %= mod; int res = 1; while (b > 0) {if (b & 1) res = res * a % mod; a = a * a % mod; b >>= 1;} return res;}
int gcd(int a, int b) { if (b == 0) return a; return gcd(b, a % b);}

//-----------------------------------------------------------------------------------------------------------------------------//

void solve() {

	int n; cin >> n;
	string s; cin >> s;

	if (s[0] == '0' or s[1] == '0' or s[n] == '0') {
		cout << "No" << nl; return;
	}

	vector<int> a, b;

	for (int i = 0; i < n; i++) {
		if (s[i] == '1') {a.push_back(i);}
		else {b.push_back(i);}
	}

	if (a.size() == n) {
		cout << "Yes" << nl;
		for (int i = 0; i < n; i++) {
			cout << i << " ";
		}
		cout << nl;
		return;
	}
	if (b.size() == n) {
		cout << "No" << nl;
		return;
	}

	vector<int> ans;
	int cnt = 0;
	int p = 0, q = 0;
	while (1) {
		if (p + 1 < a.size() and (b[q] > a[p] and b[q] < a[p + 1])) {
			ans.push_back(b[q]); q++;
		} else if (b[q] > a[p] and p + 1 == a.size()) {
			ans.push_back(b[q]); q++;
		} else {
			ans.push_back(a[p]); p++;
		}
		if (p == a.size()) {
			while (q != b.size()) {
				ans.push_back(b[q]); q++;
			}
			break;
		}
		if (q == b.size()) {
			while (p != a.size()) {
				ans.push_back(a[p]); p++;
			}
			break;
		}
	}

	cout << "Yes" << nl;
	printVec(ans);
	cout << nl;

}

int32_t main() {

	NFS;

#ifndef ONLINE_JUDGE
	freopen("error.txt", "w", stderr);
#endif

	int tc = 1;
	cin >> tc;
	while (tc--) {
		solve();
	}

	return 0;
}