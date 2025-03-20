#include <iostream>
#include <cmath>

const double g = 9.81; 

double calculateAlpha(double V, double T, double epsilon = 1e-6) {
    double left = 0, right = M_PI / 2, mid;
    while (right - left > epsilon) {
        mid = (left + right) / 2;
        if (sin(mid) < (g * T) / (2 * V))
            left = mid;
        else
            right = mid;
    }
    return mid;
}

int main() {
    double V, T;
    std::cout << "Введите начальную скорость V и время полета T: ";
    std::cin >> V >> T;

    if (V <= 0 || T <= 0) {
        std::cerr << "Ошибка: V и T должны быть положительными числами!" << std::endl;
        return 1;
    }

    double alpha = calculateAlpha(V, T);
    std::cout << "Угол α (в радианах): " << alpha << std::endl;
    std::cout << "Угол α (в градусах): " << alpha * 180 / M_PI << std::endl;

    return 0;
}
