#include <iostream>
#include <cmath>

double exampleFunction(double x) {
    return x * x * x - 0.2 * x * x + 0.5 * x - 1;
}

double derivativeExampleFunction(double x) {
    return 3 * x * x - 0.4 * x + 0.5;
}

std::pair<double, int> newtonMethod(double (*f)(double), double (*df)(double), double x0, double epsilon, int max_iter) {
    double x = x0;
    for (int i = 0; i < max_iter; ++i) {
        double f_x = f(x);
        double f_derivative = df(x);
        if (fabs(f_derivative) < 1e-10) {
            return {NAN, i + 1};
        }
        double x_new = x - f_x / f_derivative;
        if (fabs(x_new - x) < epsilon) {
            return {x_new, i + 1};
        }
        x = x_new;
    }
    return {NAN, max_iter};
}

int main() {
    double x0 = 1.0;  
    double epsilon = 1e-6;  
    int max_iter = 100;  

    auto [root, iterations] = newtonMethod(exampleFunction, derivativeExampleFunction, x0, epsilon, max_iter);

    if (std::isnan(root)) {
        std::cout << "Метод не сошелся." << std::endl;
    } else {
        std::cout << "Корень уравнения: " << root << std::endl;
        std::cout << "Количество итераций: " << iterations << std::endl;
        std::cout << "Значение функции: " << exampleFunction(root) << std::endl;
    }

    return 0;
}