#include <bits/stdc++.h>
#include <string>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long
using namespace std;

int countDistinct(int arr[], int n)
{
    // First sort the array so that all
    // occurrences become consecutive
    sort(arr, arr + n);
 
    // Traverse the sorted array
    int res = 0;
    for (int i = 0; i < n; i++) {
 
        // Move the index ahead while
        // there are duplicates
        while (i < n - 1 && arr[i] == arr[i + 1])
            i++;
 
        res++;
    }
 
    return res;
}
 
signed main() {
     fio;
     int t;
     cin>>t;
     while(t--)
     {
          int n,x;
          cin>>n>>x;
          int a[n];
          map<int,int> m;
          for(int i=0;i<n;i++){
               cin>>a[i];
               m[a[i]]++;
          }
          int p = countDistinct(a,n);
          // cout<<p<<endl;
          for(int i=0;i<n;i++){
               if(m[a[i]]>1){
                    x -= m[a[i]]-1;
                    m[a[i]]=1;
               }
               if(x<=0){
                    x=0;
                    break;
               }
          }
          // cout<<x<<endl;
          if(x>0){
               int p = countDistinct(a,n);
               // cout<<p<<endl;
               cout<<p-x<<endl;
          }else{
               int p = countDistinct(a,n);
               cout<<p<<endl;
          }
     }
     return 0;
}