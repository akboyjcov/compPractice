def find_speeds(S, V, t, tol=1e-6):
    V1, V2, new_V1, new_V2 = 0, 0, 0, 0

    while True:
        new_V1 = (2 * S) / (V - t)
        new_V2 = (2 * S) / (V + t)

        if abs(new_V1 - V1) < tol and abs(new_V2 - V2) < tol:
            break

        V1, V2 = new_V1, new_V2

    return V1, V2

S = float(input("Введите расстояние S (м): "))
V = float(input("Введите среднюю скорость V (м/с): "))
t = float(input("Введите время t (с): "))

V1, V2 = find_speeds(S, V, t)

print(f"Скорость V1: {V1:.6f} м/с")
print(f"Скорость V2: {V2:.6f} м/с")
