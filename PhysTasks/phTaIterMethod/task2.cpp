#include <iostream>
#include <cmath>

double findDistance(double V, double alpha, double tol = 1e-6) {
    double g = 9.81;
    double L = 1.0;
    double new_L;

    do {
        new_L = (V * V * std::sin(2 * alpha)) / g;
        if (std::abs(new_L - L) < tol) break;
        L = new_L;
    } while (true);

    return L;
}

int main() {
    double V, alpha;
    std::cout << "Введите V и угол α (в радианах): ";
    std::cin >> V >> alpha;

    double L = findDistance(V, alpha);
    std::cout << "Дальность полета L: " << L << '\n';
}
