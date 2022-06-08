#include <bits/stdc++.h> 
#define ll long long
using namespace std;

ll sumOfArr(ll arr[], ll n){
     ll sum = 0;
     for(int i=0;i<n;i++){
          sum+=arr[i];
     }return sum;
}

ll minDiffSubArray(ll arr[], ll n) 
{ 

  

    // To store prefix sums 

    ll prefix_sum[n]; 

  

    // Generate prefix sum array 

    prefix_sum[0] = arr[0]; 

  

    for(ll i = 1; i < n; i++) 

        prefix_sum[i] = prefix_sum[i - 1] + 

                               arr[i]; 

  

    // To store suffix sums 

    ll suffix_sum[n]; 

  

    // Generate suffix sum array 

    suffix_sum[n - 1] = arr[n - 1]; 

  

    for(ll i = n - 2; i >= 0; i--) 

        suffix_sum[i] = suffix_sum[i + 1] +  

                               arr[i]; 

  

    // Stores the minimum difference 

    ll minDiff = INT_MAX; 

  

    // Traverse the given array 

    for(ll i = 0; i < n - 1; i++) 

    { 

          

        // Calculate the difference 

        ll diff = abs(prefix_sum[i] -  

                       suffix_sum[i + 1]); 

  

        // Update minDiff 

        if (diff < minDiff) 

            minDiff = diff; 

    } 

  

    // Return minDiff 

    return minDiff; 
}

int main() {
	ll t;
	cin>>t;
	while(t--){
	     ll n,k;
	     cin>>n>>k;
	     ll a[n];
	     for(ll i=0;i<n;i++){
	          cin>>a[i];
	     }
	     ll s1[n], s2[n];
	     if(sumOfArr(a,n)<2*k){
	          cout<<-1<<endl;
	     }else{
	          sort(a,a+n);
	          ll r =0;
	          ll sum1 = 0;
	          for(int i=n-1;i>=0;i--){
	               sum1+=a[i];
	               s1[r]=a[i];
	               r++;
	               if(sum1>=k){
	                    break;
	               }
               }
               //cout<<r<<endl;
               ll sum2;
               if(sum1>=2*k){
                    sum2 = 0;
                    ll g = 0;
                    ll fact = 0;
                    for(int i=n-1-r;i>=0;i--){
                         sum2+=a[i];
                         g++;
                         if(sum2>=k){
                              fact = 1;
                              break;
                         }
                    }
                    if(fact==1){
                         cout<<r+g<<endl;
                    }else{
                         cout<<-1<<endl;
                    }
               }else{
                    sum2 = sum1;
                    ll q = 0;
                    for(int i=n-1-r;i>=0;i--){
                         sum2+=a[i];
                         s2[q]=a[i];
                         q++;
                         if(sum2>=2*k){
                              break;
                         }
                    }
                    //cout<<q<<endl;
                    ll sumofs2 = 0;
                    for(int i=0;i<q;i++){
                         sumofs2+=s2[i];
                    }
                    if(sumofs2>=k){
                         cout<<r+q<<endl;
                    }else{
                         /*for(int i=0;i<r;i++){
                              cout<<s1[i]<<" ";
                         }cout<<endl;
                         for(int i=0;i<q;i++){
                              cout<<s2[i]<<" ";
                         }cout<<endl;*/
                         ll c = r+q;
                         ll s3[c];
                         for(int i=0;i<r;i++){
                              s3[i]=s1[i];
                         }
                         for(int i=r;i<c;i++){
                              s3[i]=s2[i-r];
                         }
                         /*for(int i=0;i<c;i++){
                              cout<<s3[i]<<" ";
                         }cout<<endl;*/
                         ll u[c];
                         for(int i=0;i<c;i++){
                              u[i/2] = s3[i];
                              i++;
                              if(i>=c){
                                   break;
                              }
                              u[c-(i+1)/2]=s3[i];
                              i++;
                              if(i>=c){
                                   break;
                              }
                              u[c-(i+2)/2]=s3[i];
                              i++;
                              if(i>=c){
                                   break;
                              }
                              u[(i-1)/2]=s3[i];
                         }
                         /*for(int i=0;i<c;i++){
                              cout<<u[i]<<" ";
                         }cout<<endl;*/
                         ll b = minDiffSubArray(u,c);
                         if((sumOfArr(u,c)-b)/2>=k){
                              cout<<c<<endl;
                         }else{
                              ll d = sum1 - k;
                    	     for(ll i=r-1;i>=0;i--){
                    	          for(ll j=0;j<q;j++){
                    	               if((s1[i]>s2[j]) && ((s1[i]-s2[j])<=d) && d>=0){
                    	                    ll temp;
                    	                    d-=(s1[i]-s2[j]);
                    	                    temp = s1[i];
                    	                    s1[i] = s2[j];
                    	                    s2[j] = temp;
                    	              }
                    	          }
                    	     }
                    	     ll updatedsums2 = 0;
                    	     for(ll i=0;i<q;i++){
                    	          updatedsums2+=s2[i];
                    	     }
                    	     if(updatedsums2>=k){
                    	          cout<<c<<endl;
                    	     }
                    	     else{
                    	          ll z = 0;
                         	     ll flag = 0;
                         	     for(int i=n-1-c;i>=0;i--){
                         	          updatedsums2+=a[i];
                         	          z++;
                         	          if(updatedsums2>=k){
                         	               flag = 1;
                         	               break;
                         	          }
                         	     
                                   }
                                   if(flag){
                                        cout<<c+z<<endl;
                                   }else{
                                        cout<<-1<<endl;
                                   }  
                    	     }
                    	     
                         }
                    }
               }
               
	     }
	}
	
	return 0;
}