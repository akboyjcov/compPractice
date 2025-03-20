def trapezoid_rule(func, a, b, nseg):
    dx = 1.0 * (b - a) / nseg
    sum = 0.5 * (func(a) + func(b))
    for i in range(1, nseg):
        sum += func(a + i * dx)
        
    return sum * dx

def func(x):
    return sin(x) / x

from math import *

print("Используем метод трапеций")
print("Интегрируемая функция: f(x) = sin(x) / x")

a=1
b=10
nseg=2
eps=1e-7

print('a = ', a , ' , b = ', b , ', eps = ', eps, sep='')

int_1 = trapezoid_rule(func, a, b, nseg)
nseg *= 2
int_2 = trapezoid_rule(func, a, b, nseg)

while abs(int_1 - int_2) > eps:
    nseg *= 2
    int_1 = trapezoid_rule(func, a, b, nseg)
    nseg *= 2
    int_2 = trapezoid_rule(func, a, b, nseg)
print ("\nОтвет: I **", int_2 , "\nКоличество разбиений:" ,nseg)