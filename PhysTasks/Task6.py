S = float(input("Введите расстояние между пунктами S (м): "))
V = float(input("Введите скорость лодки V (м/с): "))
U = float(input("Введите скорость течения реки U (м/с): "))

t1 = S / (V + U)

t2 = S / (V - U)

T = t1 + t2

print(f"Общее время T: {T:.2f} секунд")
