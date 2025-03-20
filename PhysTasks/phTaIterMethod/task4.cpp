#include <iostream>
#include <cmath>

double findTime(double V, double H, double alpha, double tol = 1e-6) {
    double g = 9.81;
    double T = 1.0, new_T;

    do {
        new_T = (V * std::sin(alpha) / g) * (1 + std::sqrt(1 + (2 * g * H) / (V * V * std::sin(alpha) * std::sin(alpha))));
        if (std::abs(new_T - T) < tol) break;
        T = new_T;
    } while (true);

    return T;
}

int main() {
    double V, H, alpha;
    std::cout << "Введите V, H и угол α (в радианах): ";
    std::cin >> V >> H >> alpha;

    double T = findTime(V, H, alpha);
    std::cout << "Время полета T: " << T << '\n';
}
