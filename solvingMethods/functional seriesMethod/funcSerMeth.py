from math import *

def func(x,n):
    sum_f=0
    q=x 
    for i in range(1,n):
        sum_f+=q
        p = float((2.0*i)*(2.0*i+1)) 
        q*=(-1)*x*x/p
    return sum_f

x = float(input('Enter value in degree in x ='))
n = int(input('Enter number of terms n ='))
s = func(x,n)
print('sum =',s)    