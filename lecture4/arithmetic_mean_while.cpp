#include <iostream>

using namespace std;

int main()
{
    int n;
    int i = 0;
    float a;
    float sum = 0;

    cout << "Enter the number of numbers you want to count the average of: ";
    cin >> n;

    if (n < 0)
    {
        cout << "The number of numbers must be positive!\n";
	return 1;
    }
    else
    {
        while (i < n)
        {
            cout << "Enter number: ";
            cin >> a;
	    if(cin.good() == false)
	    {
                cout << "Incorrect value!\n";
		return 2;
	    }
            sum += a;
            i++;
        }

        cout << "Arithmetic mean of " << n << " numbers is " << (sum / n) << endl;
    }

    return 0;
}
