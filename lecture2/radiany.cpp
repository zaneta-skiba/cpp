#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a;
    cout << "Program liczacy sinus i cosinus kata w radianach!\n";
    cout << "Podaj wartosc kata w stopniach: ";
    cin >> a;

    if (a < 0)
    {
        cout << "Bledna wartosc!\n";
        return 1;
    }
    else
    {
        cout << "Sinus: " << a << ". stopni wynosi: " << sin(a * M_PI / 180)  << endl;
        cout << "Cosinus: " << a << ". stopni wynosi: " << cos(a * M_PI / 180)  << endl;
    }
    return 0;
}
