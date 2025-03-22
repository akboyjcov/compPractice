#include <iostream>
#include <cmath>

using namespace std;

double rectangle_rule(double (*func)(double), double a, double b, int nseg, double frac) {
    double dx = (b - a) / nseg;
    double sum = 0.0;
    double xstart = a + frac * dx;
    for (int i = 0; i <= nseg; i++) {
        sum += func(xstart + i * dx);
    }
    return sum * dx;
}

double func(double x) {
    return sin(x) / x;
}

int main() {
    cout << "Используем метод треугольников." << endl;
    cout << "Интегрируемая функция: f(x) = sin(x) / x." << endl;

    double a = 1;
    double b = 10;
    int nseg = 2;
    double eps = 1e-7;
    double frac = 0.5;

    cout << "a = " << a << ", b = " << b << ", frac = " << frac << ", eps = " << eps << endl;

    double int_1 = rectangle_rule(func, a, b, nseg, frac);
    nseg *= 2;
    double int_2 = rectangle_rule(func, a, b, nseg, frac);

    while (abs(int_1 - int_2) > eps) {
        nseg *= 2;
        int_1 = rectangle_rule(func, a, b, nseg, frac);
        nseg *= 2;
        int_2 = rectangle_rule(func, a, b, nseg, frac);
    }

    cout << "\nОтвет: I = " << int_2 << "\nКоличество разбиений: " << nseg << endl;
    
    return 0;
}
