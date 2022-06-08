#include <bits/stdc++.h>
#include <string>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long
using namespace std;

int main() {

// 	#ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// 	#endif

	ll t;
	cin>>t;
	while(t--)
	{
     	string s;
     	cin>>s;
     	ll g = 0;
     	for(ll i=0;i<s.length();i++)
 		{
 			if((s[i]=='0' && i!=0) && (s[i]=='0' && s[i-1]!='0'))
 			{
 				g++;
 			}
 		}
 		if(s[s.length()-1]=='1'){
 			g++;
 		}
 		cout<<g<<endl;
	}
	return 0;
}