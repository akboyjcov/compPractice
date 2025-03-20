import math 

def find_x(V, alpha, H, tol=1e-6):
    g = 9.81
    T, new_T = 0, 0

    while True:
        new_T = (V * math.sin(alpha) / g) * (1 + math.sqrt(1 + (2 * g * H) / (V**2 * math.sin(alpha)**2)))
        if abs(new_T - T) < tol:
            break
        T = new_T

    x = V * math.cos(alpha) * T
    return x

V = float(input("Введите скорость V (м/с): "))
alpha = float(input("Введите угол α (в градусах): "))
H = float(input("Введите высоту обрыва H (м): "))

alpha = math.radians(alpha)
x = find_x(V, alpha, H)

print(f"Дальность падения x: {x:.6f} м")
