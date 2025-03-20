import math

def find_S(U, H, tol=1e-6):
    g = 9.81
    T, new_T = 0, 0

    while True:
        new_T = math.sqrt(2 * H / g)
        if abs(new_T - T) < tol:
            break
        T = new_T

    return U * T

U = float(input("Введите скорость самолета U (м/с): "))
H = float(input("Введите высоту H (м): "))

S = find_S(U, H)

print(f"Дальность сбрасывания S: {S:.6f} м")
