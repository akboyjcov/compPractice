#include <iostream>

double findDistance(double U, double T, double tol = 1e-6) {
    double S = 1.0, new_S;

    do {
        new_S = U * T;
        if (std::abs(new_S - S) < tol) break;
        S = new_S;
    } while (true);

    return S;
}

int main() {
    double U, T;
    std::cout << "Введите U и T: ";
    std::cin >> U >> T;

    double S = findDistance(U, T);
    std::cout << "Расстояние S: " << S << '\n';
}
