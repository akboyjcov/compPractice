#include <iostream>
#include <cmath>

void findInitialParams(double H, double L, double tol = 1e-6) {
    double g = 9.81;
    double alpha = 0.1, V = 1.0;
    double new_alpha, new_V;

    do {
        new_alpha = std::atan(4 * H / L);
        new_V = std::sqrt(g * L / std::sin(2 * new_alpha));

        if (std::abs(new_alpha - alpha) < tol && std::abs(new_V - V) < tol) break;

        alpha = new_alpha;
        V = new_V;
    } while (true);

    std::cout << "Начальный угол α: " << alpha << " радиан\n";
    std::cout << "Начальная скорость V: " << V << '\n';
}

int main() {
    double H, L;
    std::cout << "Введите H и L: ";
    std::cin >> H >> L;

    findInitialParams(H, L);
}
