import math

def find_T(k, omega, tol=1e-6):
    phi0, new_phi0 = 0, 0
    T, new_T = 0, 0

    while True:
        new_phi0 = math.asin(1 / k)
        new_T = (math.pi / 2 - new_phi0) / omega

        if abs(new_phi0 - phi0) < tol and abs(new_T - T) < tol:
            break

        phi0, T = new_phi0, new_T

    return T

k = float(input("Введите коэффициент k: "))
omega = float(input("Введите частоту ω (рад/с): "))

T = find_T(k, omega)

print(f"Время T, при котором отклонение маятника максимально: {T:.6f} с")
