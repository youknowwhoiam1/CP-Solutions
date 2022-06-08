#include <bits/stdc++.h>
#include <boost/math/common_factor.hpp>
#define ll long long
using namespace std;

int main() {
     ll t;
     cin>>t;
     while(t--)
     {
          ll a,b;
          cin>>a>>b;
          cout<<__gcd(a,b)<<" "<<boost::math::lcm (a,b)<<endl;
     }
     return 0;
}