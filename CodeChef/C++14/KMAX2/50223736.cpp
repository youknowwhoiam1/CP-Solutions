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

	int t = 1;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		int a[n];
		int cnt = 0, mn = -1;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			mn = max(a[i], mn);
		}
		for (int i = 0; i < n; i++) {
			if (a[i] == mn and i >= k - 1){
			     cnt += n-i;
			}
		}
		cout << cnt << "\n";
	}

	return 0;
}