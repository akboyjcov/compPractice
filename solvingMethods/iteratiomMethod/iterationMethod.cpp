#include<iostream>
#include<math.h>
using namespace std;

double example_function(double x){
    return x-0.2*(pow(x,2)+6.0);
}
double simple_iteration_method(double x_0, double epsilon){
    double x=x_0;
    int iter=0;
    while (true){
        double x_new=0.2*(pow(x,2)+6.0);
        if (abs(x_new-x)<epsilon){
            cout<<"Количество итераций:"<<iter<<endl;
            return x_new;
        }
        x=x_new;
        iter+=1;
    
    }
}
int main(){
    double x_0=0.0;
    double epsilon=1e-8;
    double root=simple_iteration_method(x_0, epsilon);
    cout<<"Решение уравнения: x= "<<root<<endl;
    double fun=example_function(root);
    cout<<"Значение функции: f("<<root<<")"<<fun<<endl;
    return 0;
}