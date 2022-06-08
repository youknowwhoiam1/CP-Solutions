# cook your dish 
T= int(input())

s1=0
s2=0
l=0

for i in range(T):
     a,b=map(int, input().split())
     s1+=a
     s2+=b
     d=s1-s2
     
     if d>0 and d>l:
          l=d
          lead=1
     elif d<0 and abs(d)>l:
          l=abs(d)
          lead=2 
print(lead, l)