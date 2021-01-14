#include <iostream>
#include <cmath>

void armstrong_numbers(void);

using namespace std;

int main()
{
    cout << "Armstrong (three-digit) numbers:\n";

    armstrong_numbers();

    return 0;
}

void armstrong_numbers(void)
{
    int sum = 0;
    int x, y;

    for (int i = 100; i < 1000; i++)
    {
        for (x = i; x > 0; x /= 10)     
        {
            y = x % 10;                 // y takes the last digit of x number
            sum += pow(y, 3);           // sum the cubes of every digit
        }
        if (i == sum)
        {
            cout << i << endl;          // prints Armstrong numbers
            sum = 0;
        }
        else
            sum = 0;
    }
}

