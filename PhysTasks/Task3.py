import math

g = 9.81

H = float(input("Введите максимальную высоту подъема H (м): "))
L = float(input("Введите дальность полета L (м): "))

alpha_rad = math.atan((4 * H) / L)
alpha = math.degrees(alpha_rad)  

V = math.sqrt((g * L) / math.sin(2 * alpha_rad))

print(f"Угол α: {alpha:.2f} градусов")
print(f"Начальная скорость V: {V:.2f} м/с")
