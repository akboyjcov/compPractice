#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const double g = 9.81; 
    
    double V, alpha, H;

    cout << "Введите начальную скорость V (м/с): ";
    cin >> V;
    cout << "Введите угол α (в градусах): ";
    cin >> alpha;
    cout << "Введите высоту H (м): ";
    cin >> H;

    double alpha_rad = alpha * M_PI / 180.0;

    double T = (V * sin(alpha_rad)) / g * (1 + sqrt(1 + (2 * g * H) / (V * V * sin(alpha_rad) * sin(alpha_rad))));

    cout << "Время полета T: " << T << " секунд" << endl;

    return 0;
}
