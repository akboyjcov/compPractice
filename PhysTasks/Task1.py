import math

g = 9.81

V = float(input("Введите начальную скорость (м/с): "))
T = float(input("Введите время полета (с): "))

alpha = math.degrees(math.asin((g * T) / (2 * V)))

print(f"Угол α: {alpha:.2f} градусов")
