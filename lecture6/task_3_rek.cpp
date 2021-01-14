#include<iostream>

using namespace std;

int gcd(int a, int b);

int main()
{
    int a, b;

    cout << "Enter two positive integer numbers:\n";
    cout << "1: "; cin >> a;
    cout << "2: "; cin >> b;

    if (a < 0 || b < 0)
    {
	cout << "Error. Numbers are not greater than zero!\n";
        return 1;
    }

    cout << "GCD = " << gcd(a, b) << endl;
    return 0;
}

int gcd(int a, int b)
{
    if (a == 0 || b == 0) return a + b;
    else if (a > b) return gcd(a % b, b);
    if (b > a) return gcd(a, b % a);
}
