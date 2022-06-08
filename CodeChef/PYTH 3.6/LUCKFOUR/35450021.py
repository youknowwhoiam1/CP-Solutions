# cook your dish here
T=int(input())

for n in range(T):
    n= list(map(int, input()))
    ans= n.count(4)
    print(ans)