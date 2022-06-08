#include <bits/stdc++.h> 

using namespace std;

int main() {
     int t,n;
     cin >> t;
     double x,result;
     for(n=0; n<t; n++){
          cin >> x;
          result = pow(x , 0.5);
          cout << round(result) << endl;
     }
     
     return 0;
}