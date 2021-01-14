#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a = 3;
    float b = 3.14;
    double c = 2.1234;

    cout << "Variable a = " << a << setw(24) << " And its address = " << &a << endl;
    cout << "Variable b = " << b << setw(21) << " And its address = " << &b << endl;
    cout << "Variable c = " << c << setw(7) << " And its address = " << &c << endl;

    return 0;
}


