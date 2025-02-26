import math

g = 9.81

V = float(input("Введите начальную скорость (м/с): "))
alpha = float(input("Введите угол (в градусах): "))

alpha_rad = math.radians(alpha)

L = (V ** 2 * math.sin(2 * alpha_rad)) / g

print(f"Дальность полета L: {L:.2f} метров")
