#include <iostream>

void digits_sum (int n);

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
        digits_sum(number);

    return 0;
}

void digits_sum(int n)
{
    int sum = 0;
    int i;

    for (i = 0; n > 0; i++)
    {
        sum += n % 10;
        n = n / 10;
    }

    cout << "The given number has " << i << " digits and the sum of them is " << sum << endl;
}

