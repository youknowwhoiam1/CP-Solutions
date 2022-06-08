# cook your dish here
def square_root(number):
     return number**0.5
      

T=int(input())

for i in range(T):
     num=int(input())
     p=square_root(num)
     print(round(p))