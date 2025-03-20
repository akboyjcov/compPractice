def find_g(h, tol=1e-6):
    G = 6.672e-11  
    M = 5.96e24  
    R = 6.37e6  

    g, new_g = 0, 0

    while True:
        new_g = G * M / (R + h) ** 2

        if abs(new_g - g) < tol:
            break

        g = new_g

    return g

h = float(input("Введите высоту h (м): "))

g = find_g(h)

print(f"Ускорение свободного падения g на высоте {h} м: {g:.6f} м/с²")
