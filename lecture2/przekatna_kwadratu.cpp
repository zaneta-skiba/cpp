#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a;
    cout << "Podaj dlugosc boku kwadratu: ";
    cin >> a;

    if (a < 0)
    {
        cout << "Bledna wartosc!\n";
	return 1;
    }
    else
    {
        cout << "Przekatna kwadratu: " << sqrt(a) << endl;
    }
    return 0;
}
