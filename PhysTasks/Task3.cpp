#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const double g = 9.81; 

    double H, L;

    cout << "Введите максимальную высоту подъема H (м): ";
    cin >> H;
    cout << "Введите дальность полета L (м): ";
    cin >> L;

    double alpha_rad = atan((4 * H) / L);
    double alpha = alpha_rad * 180.0 / M_PI; 

    double V = sqrt((g * L) / sin(2 * alpha_rad));

    cout << "Угол α: " << alpha << " градусов" << endl;
    cout << "Начальная скорость V: " << V << " м/с" << endl;

    return 0;
}
