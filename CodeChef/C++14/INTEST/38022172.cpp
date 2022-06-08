#include <iostream>

using namespace std;

int main(){
     int x;
     int y;
     int i;
     int n;
     int result;
     cin >> x >> y;
     result = 0;
     for(i=0; i<x; i++){
          cin >> n;
          if(n % y == 0){
               result ++;
               
          }

     }
     cout << result <<endl;

     return 0;
}
     
     

