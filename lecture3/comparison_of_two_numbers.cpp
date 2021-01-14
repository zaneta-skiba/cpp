#include <iostream>

using namespace std;

int main(void)
{
    int x, y;
    cout << "Enter two integer numbers x and y: ";
    cin >> x >> y;

    if (cin.good() == false)
    {
        cout << "Should be an integer!\n";
        return 1;
    }
    else
    {
        if (x < y)
   	cout << x << " is less than " << y << endl;
   	else if (x > y)
   	cout << x << " is greater than " << y << endl;
  	else
   	cout << x << " is equal to " << y << endl;
    }
    return 0;
}
