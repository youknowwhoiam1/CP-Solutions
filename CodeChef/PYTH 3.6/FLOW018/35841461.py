# cook your dish here
def factorial(n):
     if n<0:
          return 0
     elif n==0 or n==1:
          return 1
     else:
          fact= 1
          while(n>1):
               fact *= n
               n -= 1
          return fact                
 
T=int(input())    

for i in range(T):
     n= int(input())
     print(factorial(n))