#include <bits/stdc++.h>
#include <string>
#define int long long
#define NFS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define max3(a,b,c) max(max((a),(b)),(c))
#define max4(a,b,c,d) max(max((a),(b)),max((c),(d)))
#define min3(a,b,c) min(min((a),(b)),(c))
#define min4(a,b,c,d) min(min((a),(b)),min((c),(d)))
using namespace std;

const int mod = 1e9 + 7;
int N = 1000000000;

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
               res = (res*x) % p;

          y = y>>1;
          x = (x*x) % p;
     }
     return res;
}

int binarySearch( int arr[], int key, int len)
{
    int h,mid,l;
    l=0;
    h=len-1;
    while(l<=h)
    {
        mid=((l+h)/2);
        if(key==arr[mid])
            return mid;
        else if(key<arr[mid])
            h=mid-1;
        else
            l=mid+1;
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
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    int t; cin>>t;
    while(t--){
        int x1,x2,y1,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        
        int ans = 0;

        for(int i = x1; i <= x2; i++){
            ans += i*(i+1)/2 + (y1-1)*(2*i + y1-2)/2;
        }
        for(int i = y1; i <= y2; i++){
            ans += x2*(x2+1)/2 + (i-1)*(2*x2 + i-2)/2;
        }
        ans -= x2*(x2+1)/2 + (y1-1)*(2*x2 + y1-2)/2;

        cout << ans << endl;
    }
    return 0;
}
