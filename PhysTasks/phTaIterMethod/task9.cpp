#include <iostream>
#include <cmath>

double findT(double omega, double k, double tol = 1e-6) {
    double phi0 = 0.0, new_phi0;

    do {
        new_phi0 = std::asin(1.0 / k);
        if (std::abs(new_phi0 - phi0) < tol) break;
        phi0 = new_phi0;
    } while (true);

    double T = (M_PI / 2 - phi0) / omega;
    return T;
}

int main() {
    double omega, k;
    
    std::cout << "Введите частоту маятника ω и коэффициент k: ";
    std::cin >> omega >> k;

    if (k <= 1) {
        std::cout << "Ошибка: k должно быть > 1\n";
        return 1;
    }

    double T = findT(omega, k);

    std::cout << "Момент времени T, когда маятник имеет максимальное отклонение: " << T << " секунд\n";

    return 0;
}
