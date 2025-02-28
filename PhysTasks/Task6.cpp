#include <iostream>

using namespace std;

int main() {
    double S, V, U;

    cout << "Введите расстояние между пунктами S (м): ";
    cin >> S;
    cout << "Введите скорость лодки V (м/с): ";
    cin >> V;
    cout << "Введите скорость течения реки U (м/с): ";
    cin >> U;

    double t1 = S / (V + U);

    double t2 = S / (V - U);

    double T = t1 + t2;

    cout << "Общее время T: " << T << " секунд" << endl;

    return 0;
}
