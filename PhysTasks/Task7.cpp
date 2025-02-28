#include <iostream>
#include <iomanip>
#include <limits> 

using namespace std;

int main() {
  double V, S, t;

  cout << "Введите среднюю скорость движения (V км/ч): ";
  cin >> V;

  cout << "Введите расстояние между пунктами (S км): ";
  cin >> S;

  cout << "Введите время движения из пункта A в пункт B (t час): ";
  cin >> t;

  double V1 = S / t;
  double V2 = S / (2 * S / V - t);

  cout << fixed << setprecision(2); 
  cout << "Средняя скорость из пункта A в пункт B (V1): " << V1 << " км/ч" << endl;
  cout << "Средняя скорость из пункта B в пункт A (V2): " << V2 << " км/ч" << endl;

  return 0;
}