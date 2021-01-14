#include <iostream>

void reverse_number(int);

using namespace std;

int main()
{
    int number;

    cout << "Enter number: ";
    cin >> number;

    if (cin.good() == false)
    {
        cout << "Must be an integer!\n";
        return 1;
    }

    if (number <= 0)
    {
        cout << "Number should be positive!\n";
        return 2;
    }
    else
        reverse_number(number);

    return 0;
}

void reverse_number(int n)
{
    for (int i = 0; n > 0; i++)
    {
        cout << n % 10;
        n = n / 10;
    }

    cout << endl;
}

