import math

g = 9.81

H = float(input("Введите высоту H (м): "))
U = float(input("Введите скорость самолета U (м/с): "))

T = math.sqrt(2 * H / g)

S = U * T

print(f"Подлетное расстояние S: {S:.2f} метров")
