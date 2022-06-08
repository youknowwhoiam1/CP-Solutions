# cook your dish here
T= int(input())

for n in range(T):
    n= list(map(int, input()))
    ans= n[0]+n[-1]
    print(ans)