# cook your dish here
T= int(input())

for i in range(T):
     n= int(input())
     if n%2==0:
          b= n/2 + 1
          print(int(b))
     elif n%2==1:
          b= (n+1)/2
          print(int(b))
          
          
