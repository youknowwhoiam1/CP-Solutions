n, k= map(int, input().split(' '))
b=0
for x in range(n):
    x= int(input())
    if x%k== 0:
        b+=1

print(b)    