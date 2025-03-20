#include <iostream>
#include <cmath>

double findTime(double S, double V, double U, double tol = 1e-6) {
    double T = 1.0, new_T;

    do {
        new_T = S / (V + U) + S / (V - U);
        if (std::abs(new_T - T) < tol) break;
        T = new_T;
    } while (true);

    return T;
}

int main() {
    double S, V, U;
    std::cout << "Введите S, V и U: ";
    std::cin >> S >> V >> U;

    double T = findTime(S, V, U);
    std::cout << "Общее время T: " << T << '\n';
}
