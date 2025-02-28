V = float(input("Введите скорость (V м/с): "))
t = float(input("Введите время (t с): "))

S1 = V * t
a = V / t
S2 = (a * t**2) / 2
S_total_1 = S1 + S2

S_total_2 = (3 * V * t) / 2

print(f"Путь, вычисленный методом S = S1 + S2: {S_total_1} м")
print(f"Путь, вычисленный методом S = 3Vt / 2: {S_total_2} м")