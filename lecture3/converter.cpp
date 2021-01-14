#include <iostream>

void converter(float);

using namespace std;

int main()
{
    float a;

    cout << "* * * * * LENGTH UNIT CONVERTER * * * * *" << endl;

    cout << "Enter length: ";
    cin >> a;

    if (cin.good() == false)
    {
        cout << "Should be a float!\n";
        return 1;
    }
    else
        converter(a);

    return 0;
}

void converter(float x)
{
    char wybor;
    cout << endl;
    cout << "What unit?\n0. mm\n1. cm\n2. m\n";
    cin >> wybor;

    switch(wybor)
    {
    	case '0':
            cout << x << " mm = " << x * 0.1 << " cm , " << x * 0.001 << " m\n";
            break;
    	case '1':
            cout << x << " cm = " << x * 10 << " mm, " << x * 0.01 << " m\n";
            break;
    	case '2':
            cout << x << "m = " << x * 100 << "cm , " << x * 1000 << "mm\n";
            break;
    	default:
            cout << "Nie ma takiej opcji!\n";
            break;
    }
}

