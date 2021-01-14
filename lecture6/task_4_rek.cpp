#include<iostream>
#include<iomanip>

using namespace std;

int fibonacci(int x);

int main()
{
    int x;

    cout << "How many Fibonacci numbers to display: ";
    cin >> x;

    if (x < 0)
    {
        cout << "Error. Number is not greater than zero!\n";
        return 1;
    }

    for (int i = 1; i <= x; i++)
    {
        cout << fibonacci(i) << setw(4);
    }

    cout << endl;
    return 0;
}

int fibonacci(int x)
{
    if (x == 1 || x == 2) return 1;
    else return fibonacci(x - 1)+ fibonacci(x - 2);
}

