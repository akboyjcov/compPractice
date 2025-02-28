import math

g = 9.81

V = float(input("Введите начальную скорость V (м/с): "))
alpha = float(input("Введите угол α (в градусах): "))
H = float(input("Введите высоту H (м): "))

alpha_rad = math.radians(alpha)

T = (V * math.sin(alpha_rad)) / g * (1 + math.sqrt(1 + (2 * g * H) / (V ** 2 * math.sin(alpha_rad) ** 2)))

print(f"Время полета T: {T:.2f} секунд")
