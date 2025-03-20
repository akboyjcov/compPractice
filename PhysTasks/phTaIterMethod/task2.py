import math

def find_L(V, alpha, tol=1e-6):
    g = 9.81
    L, new_L = 0, 0

    while True:
        new_L = (V**2 * math.sin(2 * alpha)) / g
        if abs(new_L - L) < tol:
            break
        L = new_L
    
    return L

V = float(input("Введите скорость V (м/с): "))
alpha = float(input("Введите угол α (в градусах): "))

alpha = math.radians(alpha)  
L = find_L(V, alpha)

print(f"Дальность полета: {L:.6f} м")
