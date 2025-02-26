#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const double g = 9.81;
    
    double V, T;
    
    cout << "Введите начальную скорость (м/с): ";
    cin >> V;
    cout << "Введите время полета (с): ";
    cin >> T;

    double alpha = asin((g * T) / (2 * V)) * 180.0 / M_PI;

    cout << "Угол α: " << alpha << " градусов" << endl;

    return 0;
}
