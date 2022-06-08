T= int(input())

for n in range(T):
    x, y=map(int, input().split(' '))
    b= x%y
    print(b)