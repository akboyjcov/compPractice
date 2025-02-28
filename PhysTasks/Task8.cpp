#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
  double V, t;

  cout << "Введите скорость (V м/с): ";
  cin >> V;

  cout << "Введите время (t с): ";
  cin >> t;

  double S1 = V * t;
  double a = V / t;
  double S2 = (a * t * t) / 2;  
  double S_total_1 = S1 + S2;

  double S_total_2 = (3 * V * t) / 2;

  cout << fixed << setprecision(2);
  cout << "Путь, вычисленный методом S = S1 + S2: " << S_total_1 << " м" << endl;
  cout << "Путь, вычисленный методом S = 3Vt / 2: " << S_total_2 << " м" << endl;

  return 0;
}