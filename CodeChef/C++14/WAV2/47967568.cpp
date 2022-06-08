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

// #undef assert
// #define assert(x) if(!(x))while(true);

#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
// debug & operator << (debug & dd, P p) { dd << "(" << p.x << ", " << p.y << ")"; return dd; }

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
        if (key == arr[mid]) {
            return mid;
        }
        else if (key < arr[mid]) {
            h = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }
    return -1;
}

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int mod_mul(int a, int b) {
    a = a % mod;
    b = b % mod;
    return (((a * b) % mod) + mod) % mod;
}

// vector<int> fact(300005, 1);


// int fast_nCr(int n, int r)
// {
//     int ans = 1;
//     ans = fact[n];
//     ans = mod_mul(ans, power(fact[r], mod - 2, mod));
//     ans = mod_mul(ans, power(fact[n - r], mod - 2, mod));
//     return ans;
// }

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
/*
vector<bool>prime(10000001, true);

void sieve()
{
    int i, j;
    for (int i = 2; i <= 10000000; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= 10000000; j += i)
            {
                prime[j] = false;
            }
        }
    }
}
*/

vector<int> smallest_factor;
vector<bool> prime;
vector<int> primes;

void sieve(int maximum) {
    int one  = 1;
    maximum = max(maximum, one);
    smallest_factor.assign(maximum + 1, 0);
    prime.assign(maximum + 1, true);
    prime[0] = prime[1] = false;
    primes = {};

    for (int p = 2; p <= maximum; p++)
        if (prime[p]) {
            smallest_factor[p] = p;
            primes.push_back(p);

            for (int64_t i = int64_t(p) * p; i <= maximum; i += p)
                if (prime[i]) {
                    prime[i] = false;
                    smallest_factor[i] = p;
                }
        }
}

// Prime factorizes n in worst case O(sqrt n / log n). Requires having run `sieve` up to at least sqrt(n).
// If we've run `sieve` up to at least n, takes O(log n) time.
vector<pair<int64_t, int>> prime_factorize(int64_t n) {
    int64_t sieve_max = int64_t(smallest_factor.size()) - 1;
    assert(1 <= n && n <= sieve_max * sieve_max);
    vector<pair<int64_t, int>> result;

    if (n <= sieve_max) {
        while (n != 1) {
            int64_t p = smallest_factor[n];
            int exponent = 0;

            do {
                n /= p;
                exponent++;
            } while (n % p == 0);

            result.emplace_back(p, exponent);
        }

        return result;
    }

    for (int64_t p : primes) {
        if (p * p > n)
            break;

        if (n % p == 0) {
            result.emplace_back(p, 0);

            do {
                n /= p;
                result.back().second++;
            } while (n % p == 0);
        }
    }

    if (n > 1)
        result.emplace_back(n, 1);

    return result;
}


int get_prime_exponent(int n) {
    vector<pair<int64_t, int>> prime_factors = prime_factorize(n);
    int sum = 0;

    for (auto &pf : prime_factors)
        sum += pf.second;

    return sum;
}

bool isPalindrome(string s) {
    int flag = true;
    int n = s.length();
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - i - 1]) {
            flag = false;
            break;
        }
    }
    return flag;
}

bool sortbysec(const pair<int, int> &a,
               const pair<int, int> &b)
{
    return (a.second < b.second);
}

signed main() {

    NFS;

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, q; cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < q; i++) {
        int x; cin >> x;
        int d = upper_bound(a, a + n, x) - a;
        // cout << d << '\n';
        if (binarySearch(a, x, n) != -1) {
            cout << 0 << '\n';
            continue;
        }
        if (max(0LL, n - d) % 2 == 0) {
            cout << "POSITIVE" << '\n';
        } else {
            cout << "NEGATIVE" << '\n';
        }
    }

    return 0;
}