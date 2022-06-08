#include <bits/stdc++.h> 

using namespace std;

long long sumOfArr(long long arr[],long long n){
     long long sum = 0;
     for(int i=0;i<n;i++){
          sum+=arr[i];
     }
     return sum;
}

void swap(long long arr[], long long p, long long brr[], long long q){
     long long temp;
     temp = arr[p];
     arr[p] = brr[q];
     brr[q]=temp;
}

int main() {
	 long long t;
	 cin>>t;
	 while(t--){
	      long long n,m;
	      cin>>n>>m;
	      long long a[n],b[m];
          for(long long i=0;i<n;i++){
               cin>>a[i];
          }
          for(long long i=0;i<m;i++){
               cin>>b[i];
          }
          sort(a,a+n);
          sort(b,b+m);
          long long d = 0;
          for(long long i=0;i<((m<=n)? m:n);i++){
               if(sumOfArr(a,n)<=sumOfArr(b,m)){
                    if(a[i]<b[m-1-i]){
                         swap(a,i,b,m-1-i);
                         d++;
                    }
                    else{
                         break;
                    }
               }
          }
          if(sumOfArr(a,n)<=sumOfArr(b,m)){
               cout<<-1<<endl;
          }else{
               cout<<d<<endl;
          }
	      
     }
	return 0;
}