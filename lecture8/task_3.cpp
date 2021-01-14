#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float x = 12.34;
    float *p;
    p = &x;

    cout << "x = " << x << setw(26) << " and its address: " << &x << endl;
    cout << "Pointer p = " << *p << " and its address: " << p << endl;
    return 0;
}


