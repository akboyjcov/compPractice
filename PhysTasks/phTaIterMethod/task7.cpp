#include <iostream>
#include <cmath>

void findSpeeds(double S, double V, double t, double tol = 1e-6) {
    double V1 = 1.0, V2 = 1.0, new_V1, new_V2;

    do {
        new_V1 = S / (t + S / V);
        new_V2 = 2 * S / ((2 * S / V) - t);

        if (std::abs(new_V1 - V1) < tol && std::abs(new_V2 - V2) < tol) break;

        V1 = new_V1;
        V2 = new_V2;
    } while (true);

    std::cout << "Скорость V1: " << V1 << '\n';
    std::cout << "Скорость V2: " << V2 << '\n';
}

int main() {
    double S, V, t;
    std::cout << "Введите S, V и t: ";
    std::cin >> S >> V >> t;

    findSpeeds(S, V, t);
}
