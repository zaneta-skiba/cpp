#include<iostream>

using namespace std;

double multiplication(double, double);

int main()
{
    double a, b;

    cout << "Enter two real numbers:\n";
    cout << "1: "; cin >> a;
    cout << "2: "; cin >> b;

    cout << "Multiplication result: " << multiplication(a, b) << endl;

    return 0;
}

double multiplication(double x, double y)
{
    return x * y;
}
