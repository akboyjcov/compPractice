#include <iostream>
#include <cmath>

double findDistance(double V, double t, double tol = 1e-6) {
    double a = V / t;  // Предполагаем, что ускорение равно V/t
    double S = 1.0, new_S;

    do {
        double S1 = V * t;
        double S2 = (V * V) / (2 * a);
        new_S = S1 + S2;

        if (std::abs(new_S - S) < tol) break;

        S = new_S;
    } while (true);

    return S;
}

int main() {
    double V, t;
    std::cout << "Введите V и t: ";
    std::cin >> V >> t;

    double S = findDistance(V, t);
    std::cout << "Пройденный путь S: " << S << '\n';
}
