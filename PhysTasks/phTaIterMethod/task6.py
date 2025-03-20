def find_T(S, V, U, tol=1e-6):
    t1, t2, new_T = 0, 0, 0

    while True:
        new_T = (S / (V + U)) + (S / (V - U))
        if abs(new_T - (t1 + t2)) < tol:
            break
        t1, t2 = S / (V + U), S / (V - U)

    return new_T

S = float(input("Введите расстояние S (м): "))
V = float(input("Введите скорость лодки V (м/с): "))
U = float(input("Введите скорость течения U (м/с): "))

T = find_T(S, V, U)

print(f"Общее время T: {T:.6f} секунд")
