#include <iostream>
#include <cmath>

using namespace std;

double example_function(double x) {
    return pow(x, 3) - 0.2 * pow(x, 2) + 0.5 * x - 1;
}

double dichotomy_method(double (*f)(double), double a, double b, double epsilon) {
    if (f(a) * f(b) > 0) {
        return NAN; 
    }

    int iter = 0;
    while ((b - a) / 2 > epsilon) {
        double c = (a + b) / 2;
        iter++;

        if (f(c) == 0) {
            return c;
        } else if (f(a) * f(c) < 0) {
            b = c;
        } else {
            a = c;
        }
    }

    cout << "Количество итераций: " << iter << endl;
    return (a + b) / 2;
}

int main() {
    double a = 0;
    double b = 3;
    double epsilon = 1e-10;

    double root = dichotomy_method(example_function, a, b, epsilon);
    cout << "Решение уравнения: x = " << root << endl;

    double fun = example_function(root);
    cout << "Значение функции: f(" << root << ") = " << fun << endl;

    return 0;
}