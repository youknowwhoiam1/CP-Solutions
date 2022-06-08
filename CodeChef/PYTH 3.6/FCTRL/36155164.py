def number_of_zeros(n):
    zeros=0
    i=1
    while n//5**i>0:
        zeros=zeros+n//5**i
        i=i+1
    return zeros
    

T=int(input())
for _ in range(T):
     n=int(input())
     result=number_of_zeros(n)
     print(result)