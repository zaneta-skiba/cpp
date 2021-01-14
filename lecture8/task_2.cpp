#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a = 3;
    int b = 7;
    int &ref = a;

    cout << "Variable a = " << a << setw(21) << " And its address = " << &a << endl;
    cout << "Variable b = " << b << setw(21) << " And its address = " << &b << endl;
    cout << "Variable ref = " << ref << setw(7) << " And its address = " << &ref << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - \n";
    cout << "a = 10\n";
    a = 10;
    cout << "b = 10\n";
    b = 10;
    cout << endl;

    cout << "Variable a = " << a << setw(21) << " And its address = " << &a << endl;
    cout << "Variable b = " << b << setw(21) << " And its address = " << &b << endl;
    cout << "Variable ref = " << ref << setw(7) << " And its address = " << &ref << endl;

    if(&a == &ref)
    {
        cout << "\nGreat! You got the reference right\n";
    }
    
    return 0;
}


