#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double func(double x, int n) {
    double sum_f = 0;
    double q = x;
    
    for (int i = 1; i < n; ++i) {
        sum_f += q;
        double p = (2.0 * i) * (2.0 * i + 1);
        q *= (-1) * x * x / p;
    }
    return sum_f;
}

int main() {
    double x;
    int n;
    
    cout << "Enter value in degree in x = ";
    cin >> x;
    
    cout << "Enter number of terms n = ";
    cin >> n;
    
    double s = func(x, n);
    cout << fixed << setprecision(6);
    cout << "sum = " << s << endl;
    
    return 0;
}