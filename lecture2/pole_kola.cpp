
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float r;
    cout << "Podaj promien kola: ";
    cin >> r;

    if (r < 0)
    {
    	cout << "Bledna wartosc!\n";
	return 1;
    }	
    else
    {
    	cout << "Pole kola wynosi: " << (M_PI * pow(r,2)) << endl;
    }
    return 0;
}
