import math

def find_parameters(H, L, tol=1e-6):
    g = 9.81
    alpha, new_alpha = 0, 0
    W, new_W = 0, 0

    while True:
        new_alpha = math.atan(4 * H / L)
        new_W = math.sqrt(g * L / math.sin(2 * new_alpha))

        if abs(new_alpha - alpha) < tol and abs(new_W - W) < tol:
            break

        alpha, W = new_alpha, new_W

    return math.degrees(alpha), W

H = float(input("Введите максимальную высоту H (м): "))
L = float(input("Введите дальность полета L (м): "))

alpha, W = find_parameters(H, L)

print(f"Угол α: {alpha:.6f} градусов")
print(f"Начальная скорость W: {W:.6f} м/с")
