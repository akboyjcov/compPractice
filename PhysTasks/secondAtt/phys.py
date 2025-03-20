from math import *

def simple_iteration_method(func, phi, x_0, epsilon=1e-8, max_iter=1000):
    x = x_0
    for i in range(max_iter):
        x_new = phi(x)
        if abs(x_new - x) < epsilon:
            print(f'Количество итераций: {i}')
            return x_new
        x = x_new
    print('Превышено количество итераций')
    return x



def task1(V, T, g=9.81):
    func = lambda x: x - asin(g * T / (2 * V))
    phi = lambda x: asin(g * T / (2 * V))
    return simple_iteration_method(func, phi, x_0=0)

def task2(V, alpha, g=9.81):
    L = (V**2 * sin(2 * alpha)) / g
    return L

def task3(H, L, g=9.81):
    func = lambda V: V - sqrt(g * L**2 / (4 * H * sin(2 * atan(4 * H / L))))
    phi = lambda V: sqrt(g * L**2 / (4 * H * sin(2 * atan(4 * H / L))))
    return simple_iteration_method(func, phi, x_0=1)

def task4(V, alpha, H, g=9.81):
    func = lambda T: T - (V * sin(alpha) / g) * (1 + sqrt(1 + (2 * g * H) / (V**2 * sin(alpha)**2)))
    phi = lambda T: (V * sin(alpha) / g) * (1 + sqrt(1 + (2 * g * H) / (V**2 * sin(alpha)**2)))
    return simple_iteration_method(func, phi, x_0=1)

def task5(H, U, g=9.81):
    S = U * sqrt(2 * H / g)
    return S

def task6(V, S, U):
    func = lambda T: T - (S / (V + U) + S / (V - U))
    phi = lambda T: (S / (V + U) + S / (V - U))
    return simple_iteration_method(func, phi, x_0=1)

def task7(S, V, V1, V2):
    func = lambda t: t - (2 * S / (V1 + V2))
    phi = lambda t: (2 * S / (V1 + V2))
    return simple_iteration_method(func, phi, x_0=1)

def task8(t, V, a):
    func = lambda S: S - (V * t + a * t**2 / 2)
    phi = lambda S: (V * t + a * t**2 / 2)
    return simple_iteration_method(func, phi, x_0=1)

print('Задача 2:', task2(40, radians(40)))
print('Задача 3:', task3(10, 50))
print('Задача 4:', task4(20, radians(30), 10))
print('Задача 5:', task5(100, 50))
print('Задача 6:', task6(10, 100, 2))
print('Задача 7:', task7(100, 60, 80, 100))
print('Задача 8:', task8(10, 20, 2))
