#include <iostream>
#include <cmath>

//Passing some values by reference
void square(int , int , int , float &, float &, int &);
void print(int &, float &, float &);

using namespace std;

int main()
{
    int a, b,c;
    int info;
    float x1, x2;

    float &ref_x1 = x1;
    float &ref_x2 = x2;
    int &ref_info = info;

    cout << "- - - - - QUADRIC EQUATION ax^2 + bx + c = 0 - - - - - \n";

    cout << "Enter 3 integers: ";
    cin >> a >> b >> c;

    if (cin.good() == false)
    {
        cout << "Should be an integer!\n";
        return 1;
    }
    else
        square (a, b, c, ref_x1, ref_x2, ref_info);
        print (ref_info, ref_x1, ref_x2);

    return 0;
}

void square(int a, int b, int c, float &ref_x1, float &ref_x2, int &ref_info)
{
    float delta;

    if (a == 0)
    {
        ref_info = 3;      // info == 3, rownanie liniowe
    }
    else
    {
        delta = ((b*b) - (4 * a * c));       //obliczanie delty

        if (delta > 0)
        {
            ref_info = 0;
            ref_x1 = ((-b - sqrt(delta))/ (2 * a));
            ref_x2 = ((-b + sqrt(delta))/ (2 * a));
        }
        if (delta == 0)
        {
            ref_info = 1;
            ref_x1 = (-b /(2 * a));
        }
        if (delta < 0)
        {
            ref_info = 2;
        }
    }
}

void print(int &ref_info, float &ref_x1, float &ref_x2)
{
    if (ref_info == 0)
    {
        cout << "Delta wieksza od 0!\n";
        cout << "x1 = " << ref_x1 << endl;
        cout << "x2 = " << ref_x2 << endl;
    }
    if (ref_info == 1)
    {
        cout << "Delta rowna 0!\n";
        cout << "x0 = " << ref_x1 << endl;
    }
    if (ref_info == 2)
    {
        cout << "Delta mniejsza od zera!\n";
        cout << "Brak pierwiastkow! \n";
    }
    if (ref_info == 3)
    {
        cout << "Rownanie liniowe!\n";
    }
}

