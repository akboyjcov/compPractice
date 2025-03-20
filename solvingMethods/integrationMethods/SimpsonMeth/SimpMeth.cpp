#include <iostream>
#include <cmath>

using namespace std;

double func(double x) {
    return sin(x) / x;
}

double simpson_rule(double (*func)(double), double a, double b, int nseg) {
    if (nseg % 2 == 1)  
        nseg++;

    double dx = (b - a) / nseg;
    double sum = func(a) + func(b) + 4 * func(a + dx);

    nseg /= 2;
    for (int i = 1; i < nseg; i++) {
        sum += 2 * func(a + 2 * i * dx) + 4 * func(a + (2 * i + 1) * dx);
    }

    return sum * dx / 3.0;
}

int main() {
    cout << "Используем метод Симпсона" << endl;
    cout << "Интегрируемая функция: f(x) = sin(x) / x" << endl;

    double a = 1, b = 10;
    int nseg = 2;
    double eps = 1e-7;

    cout << "a = " << a << ", b = " << b << ", eps = " << eps << endl;

    double int_1 = simpson_rule(func, a, b, nseg);
    nseg *= 2;
    double int_2 = simpson_rule(func, a, b, nseg);

    while (fabs(int_1 - int_2) > eps) {
        nseg *= 2;
        int_1 = simpson_rule(func, a, b, nseg);
        nseg *= 2;
        int_2 = simpson_rule(func, a, b, nseg);
    }

    cout << "\nОтвет: I ** " << int_2 << "\nКоличество разбиений: " << nseg << endl;

    return 0;
}
