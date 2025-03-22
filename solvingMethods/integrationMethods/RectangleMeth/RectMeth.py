from math import *

def _rectangle_rule(func, a, b, nseg, frac):
    dx = 1.0 * (b - a) / nseg 
    sum = 0.0
    xstart = a + frac * dx 
    for i in range(nseg+1):
        sum += func(xstart + i * dx)
    return sum * dx

def func(x):
    return sin(x) / x

print("Используем метод треугольников.")
print("Интегрируемая функция: f(x) = sin(x) / x.")

a=1
b=10 
nseg=2
eps=1e-7
frac=0.5

print('a = ', a , ',b = ', b , ', farc = ', frac ,', eps = ', eps, sep='')

int_1 = _rectangle_rule(func, a, b, nseg, frac)
nseg *=2 
int_2 = _rectangle_rule(func, a, b, nseg, frac)

while abs(int_1 - int_2) > eps:
    nseg *= 2
    int_1 = _rectangle_rule(func, a, b, nseg, frac)
    nseg *= 2
    int_2 = _rectangle_rule(func, a, b, nseg, frac)
    
print("\nОтвет: I =", int_2, "\nКоличество разбиейний:", nseg)