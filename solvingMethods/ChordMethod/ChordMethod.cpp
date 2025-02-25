#include <iostream>
#include <cmath>
#include <limits>  

using namespace std;

double example_function(double x) {
  return pow(x, 3) - 0.2 * pow(x, 2) + 0.5 * x - 1;
}

double chord_method(double (*f)(double), double a, double b, double eps, int max_iter, int& iteration) {
    iteration = 0;
    if (f(a) * f(b) >= 0) {
        return numeric_limits<double>::quiet_NaN(); 
    }

    double x = a - (b - a) * f(a) / (f(b) - f(a));

    for (int i = 0; i < max_iter; ++i) {
        if (abs(f(x)) < eps) {
            break;
        }

        if (f(a) * f(x) < 0) {
            b = x;
        } else {
            a = x;
        }

        x = a - (b - a) * f(a) / (f(b) - f(a));
        iteration++;
    }
    return x;
}

int main() {
    double a = 0;
    double b = 3;
    double epsilon = 1e-6;
    int max_iter = 1000;
    int iteration_count;

    double root = chord_method(example_function, a, b, epsilon, max_iter, iteration_count);

    if (isnan(root)) {
        cout << "Метод хорд не сошелся. Возможно, не выполняются условия смены знака на интервале." << endl;
    } else {
        cout << "Количество итераций: " << iteration_count << endl;
        cout << "Корень уравнения: " << root << endl;
        double fun = example_function(root);
        cout << "Значение функции: f(" << root << ") = " << fun << endl;
    }

    return 0;
}