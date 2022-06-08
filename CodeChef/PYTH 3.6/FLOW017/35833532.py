# cook your dish here
T=int(input())

for i in range(T):
     n= list(map(int, input().split()))
     b= sorted(n)
     c= b[1]
     print(c)