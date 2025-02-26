#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const double g = 9.81; 
    
    double V, alpha;
    
    cout << "Введите начальную скорость (м/с): ";
    cin >> V;
    cout << "Введите угол (в градусах): ";
    cin >> alpha;

    double alpha_rad = alpha * M_PI / 180.0;

    double L = (V * V * sin(2 * alpha_rad)) / g;

    cout << "Дальность полета L: " << L << " метров" << endl;

    return 0;
}
