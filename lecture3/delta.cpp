#include <iostream>
#include <cmath>

void quadratic_equation(int, int, int);

using namespace std;

int main()
{
    int a, b,c;

    cout << "* * * * * QUADRIC EQUATION ax^2 + bx + c = 0 * * * * *\n";

    cout << "Enter 3 integers, the first value can't be 0!: ";
    cin >> a >> b >> c;

    if (a == 0)
    {
        cout << "ERROR! The first value can't be zero!\n";
        return 1;
    }

    if (cin.good() == false)
    {
        cout << "Should be an integer!\n";
        return 2;
    }
    else
        quadratic_equation(a, b, c);

    return 0;
}

void quadratic_equation(int x, int y, int z)
{
    float delta, x1, x2, x0;
    delta = ((y * y) - (4 * x * z));

    if (delta > 0)
    {
        x1 = ((-y - sqrt(delta))/ (2 * x));
        x2 = ((-y + sqrt(delta))/ (2 * x));
        cout << "Delta wieksza od 0!\n";
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }

    if (delta == 0)
    {
        cout << "Delta rowna 0!\n";
        x0 = (-y /(2 * x));
        cout << "x0 = " << x0 << endl;
    }

    if (delta < 0)
    {
        cout << "Delta mniejsza od zera!\n";
        cout << "Brak pierwiastkow! \n";
    }
}

