#include <bits/stdc++.h>
#include <string>
#define int long long
#define NFS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb push_back
#define fi first
#define se second
#define all(x) (x).begin(), (x).end() //Forward traversal
#define max3(a,b,c) max(max((a),(b)),(c))
#define max4(a,b,c,d) max(max((a),(b)),max((c),(d)))
#define min3(a,b,c) min(min((a),(b)),(c))
#define min4(a,b,c,d) min(min((a),(b)),min((c),(d)))
using namespace std;

const int mod = 1e9 + 7;
int N = 1000001;

int modFact(int n, int p)
{
    if (n >= p)
        return 0;

    int result = 1;
    for (int i = 1; i <= n; i++)
        result = (result * i) % p;

    return result;
}

bool coprime(int a, int b) {
    if ( __gcd(a, b) == 1)
        return true;
    else
        return false;
}

int power(int x, int y, int p)
{
    int res = 1;
    x = x % p;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % p;

        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}

int binarySearch( int arr[], int key, int len)
{
    int h, mid, l;
    l = 0;
    h = len - 1;
    while (l <= h)
    {
        mid = ((l + h) / 2);
        if (key == arr[mid])
            return mid;
        else if (key < arr[mid])
            h = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int nCrModp(int n, int r, int p)
{
    if (r > n - r)
        r = n - r;

    int C[r + 1];
    memset(C, 0, sizeof(C));

    C[0] = 1; // Top row of Pascal Triangle

    for (int i = 1; i <= n; i++) {

        for (int j = min(i, r); j > 0; j--)
            C[j] = (C[j] + C[j - 1]) % p;
    }
    return C[r];
}

signed main() {

    NFS;

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t; cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        string s; cin >> s;

        int q[k];
        for (int i = 0; i < k; i++) {
            cin >> q[i];
        }
        vector<int> v;
        for (int i = 0; i < n - 1; i++) {
            if (s[i] != s[i + 1]) {
                v.push_back(1);
            } else {
                v.push_back(2);
            }
        }
        int sum = 0;
        for (int i = 0; i < v.size(); i++) {
            sum += v[i];
        }
        if (n == 1) {
            cout << 0 << "\n";
        } else {
            for (int i = 0; i < k; i++) {
                if (q[i] == 1) {
                    if (v[q[i] - 1] == 1) {
                        v[q[i] - 1] = 2;
                        sum += 1;
                    } else {
                        v[q[i] - 1] = 1;
                        sum -= 1;
                    }
                } else if (q[i] == n) {
                    if (v[q[i] - 2] == 1) {
                        v[q[i] - 2] = 2;
                        sum += 1;
                    } else {
                        v[q[i] - 2] = 1;
                        sum -= 1;
                    }
                } else {
                    if (v[q[i] - 1] == 1) {
                        v[q[i] - 1] = 2;
                        sum += 1;
                    } else {
                        v[q[i] - 1] = 1;
                        sum -= 1;
                    }
                    if (v[q[i] - 2] == 1) {
                        v[q[i] - 2] = 2;
                        sum += 1;
                    } else {
                        v[q[i] - 2] = 1;
                        sum -= 1;
                    }
                }
                cout << sum << "\n";
            }
        }


    }

    return 0;
}
