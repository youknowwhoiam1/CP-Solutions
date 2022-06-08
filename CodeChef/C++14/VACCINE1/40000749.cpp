#include <bits/stdc++.h> 

using namespace std;

int main() {
     int d1,v1,d2,v2,P;
     cin>>d1>>v1>>d2>>v2>>P;
     if(d1==d2){
          if(v1>=P || v2>=P ||(v1+v2)>=P){
               cout<<d1;
          }else{
               if(P%(v1+v2)==0){
                    cout<<P/(v1+v2)+d1-1;
               }else{
                    cout<<P/(v1+v2)+d1;
               }
          }
     }else if(d1>d2){
          if(v2>=P){
               cout<<d2;
          }else if((d1-d2)*v2>=P){
               if(P%v2==0){
                    cout<<P/v2+d2-1;
               }else{
                    cout<<P/v2+d2;
               }
          }else{
               int count = P - (d1-d2)*v2;
               if(count%(v1+v2)==0){
               cout<<count/(v1+v2)+(d1-1);
               }else{
               cout<<count/(v1+v2)+d1;
               }
          }
     }else{
          if(v1>=P){
               cout<<d1;
          }else if((d2-d1)*v1>=P){
               if(P%v1==0){
                    cout<<P/v1+d1-1;
               }else{
                    cout<<P/v1+d1;
               }
          }else{
               int count = P - (d2-d1)*v1;
               if(count%(v1+v2)==0){
               cout<<count/(v1+v2)+(d2-1);
               }else{
               cout<<count/(v1+v2)+d2;
               }
          }
     }
     
	return 0;
}