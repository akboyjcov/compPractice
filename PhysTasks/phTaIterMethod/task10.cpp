#include <iostream>
#include <cmath>

double findG(double h, double tol = 1e-6) {
    const double G = 6.672e-11;
    const double M = 5.96e24;
    const double R = 6.37e6;

    double g = 0.0, new_g;

    do {
        new_g = G * M / pow(R + h, 2);
        if (std::abs(new_g - g) < tol) break;
        g = new_g;
    } while (true);

    return new_g;
}

int main() {
    double h;
    
    std::cout << "Введите высоту h (в метрах): ";
    std::cin >> h;

    double g = findG(h);

    std::cout << "Ускорение свободного падения на высоте " << h << " м: " << g << " м/с²\n";

    return 0;
}
