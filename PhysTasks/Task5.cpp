#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const double g = 9.81; 
    
    double H, U;

    cout << "Введите высоту H (м): ";
    cin >> H;
    cout << "Введите скорость самолета U (м/с): ";
    cin >> U;

    double T = sqrt(2 * H / g);

    double S = U * T;

    cout << "Подлетное расстояние S: " << S << " метров" << endl;

    return 0;
}
