def find_S(V, t, a, tol=1e-6):
    S1, S2, new_S = 0, 0, 0

    while True:
        new_S = (V * t) + (a * t**2) / 2
        if abs(new_S - (S1 + S2)) < tol:
            break
        S1, S2 = V * t, (a * t**2) / 2

    return new_S

V = float(input("Введите скорость V (м/с): "))
t = float(input("Введите время t (с): "))
a = float(input("Введите ускорение a (м/с²): "))

S = find_S(V, t, a)

print(f"Пройденное расстояние S: {S:.6f} м")
