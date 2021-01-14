#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int x;

    cout << "How many Fibonacci numbers to display: ";
    cin >> x;
    int fib[x];

    for (int i = 0; i < x; i++)
    {
        if (i == 0 || i == 1)
        {
            fib[i] = 1;
            cout << fib[i] << setw(4);
            continue;
        }

        fib[i] = fib[i - 1] + fib[i - 2];
        cout << fib[i] << setw(4);
    }
    cout << endl;
    return 0;
}
