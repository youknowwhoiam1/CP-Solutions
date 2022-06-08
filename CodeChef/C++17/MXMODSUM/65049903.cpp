#include <bits/stdc++.h>
using namespace std;
#define _fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int

void solve()
{
	int n, m;
	cin >> n >> m;
	vector<int> a;
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		a.push_back(x);
	}
	int ans = 0;
	sort(a.begin(), a.end());
	for (int i = 0; i < n; i++) {
		int x = a[n - 1] + a[i] + (((a[i] - a[n - 1]) % m + m) % m);
		ans = max(ans, x);
	}
	cout << ans << endl;
}


int main()
{
	_fast;
	int t; cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}