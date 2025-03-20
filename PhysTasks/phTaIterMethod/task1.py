import math

g = 9.81  

def calculate_alpha(V, T, epsilon=1e-6):
    left, right = 0, math.pi / 2
    while right - left > epsilon:
        mid = (left + right) / 2
        if math.sin(mid) < (g * T) / (2 * V):
            left = mid
        else:
            right = mid
    return mid

def main():
    try:
        V = float(input("Введите начальную скорость V: "))
        T = float(input("Введите время полета T: "))

        if V <= 0 or T <= 0:
            raise ValueError("V и T должны быть положительными числами.")

        alpha = calculate_alpha(V, T)
        print(f"Угол α (в радианах): {alpha:.6f}")
        print(f"Угол α (в градусах): {math.degrees(alpha):.2f}")

    except ValueError as e:
        print(f"Ошибка: {e}")

if __name__ == "__main__":
    main()
