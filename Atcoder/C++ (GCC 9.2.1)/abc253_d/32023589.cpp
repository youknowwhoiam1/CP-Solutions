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
void _print(double t) {cerr << t;}
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

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

//-----------------------------------------------------------------------------------------------------------------------------//

const int mod = 1e18;
const int inf = 1e18;

int mod_add(int a, int b) {a = a % mod; b = b % mod; return (((a + b) % mod) + mod) % mod;}
int mod_mul(int a, int b) {a = a % mod; b = b % mod; return (((a * b) % mod) + mod) % mod;}
int inv(int i) { if (i == 1) return 1; return (mod - ((mod / i) * inv(mod % i)) % mod) % mod;}
int pwr(int a, int b) {a %= mod; int res = 1; while (b > 0) {if (b & 1) res = res * a % mod; a = a * a % mod; b >>= 1;} return res;}
int gcd(int a, int b) { if (b == 0) return a; return gcd(b, a % b);}

//-----------------------------------------------------------------------------------------------------------------------------//

int lcm(int A, int B) {
	int G = __gcd(A, B);
	if (log10(A) + log10(B) - log10(G) > 18) return 1e18 + 1;
	return (A / G) * B;
}

void solve() {

	int n, a, b;
	cin >> n >> a >> b;
	int c = lcm(a, b);
	int p = n - n % a;
	int q = n - n % b;
	int r = n - n % c;
	int sum = 0;
	debug(p) debug(q)
	sum += a * ((p / a) * (p / a + 1)) / 2;
	sum += b * ((q / b) * (q / b + 1)) / 2;
	sum -= c * ((r / c) * (r / c + 1)) / 2;
	debug(sum)
	int ans = n * (n + 1) / 2 - sum;
	cout << ans << nl;

}

int32_t main() {

	NFS;

#ifndef ONLINE_JUDGE
	freopen("error.txt", "w", stderr);
#endif

	using namespace std::chrono;
	high_resolution_clock::time_point t1 = high_resolution_clock::now();

	int tc = 1;
	// cin >> tc;
	while (tc--) {
		solve();
	}

	high_resolution_clock::time_point t2 = high_resolution_clock::now();
	duration<double> time_span = duration_cast<duration<double>>(t2 - t1);
	std::cerr << "Time: " << time_span.count() << " seconds.";
	std::cerr << std::endl;

	return 0;
}