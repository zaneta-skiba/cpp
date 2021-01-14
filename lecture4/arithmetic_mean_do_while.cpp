#include <iostream>

using namespace std;

int main()
{
    int n;
    char c;
    float a;
    float sum = 0;

    do
    {
        cout << "Enter the number of numbers you want to count the average of: ";
        cin >> n;

        if (n <= 0)
        {
            cout << "The number of numbers must be positive!\n";
            cout << "If you want to count the average again, press T\n";
            cin >> c;

            if (c != 'T' && c != 't')
            {
                return 1;
	    }
        }
    }
    while (n <= 0 );


    for (int i = 0; i < n; i++)
    {
        cout << "Enter number: ";
        cin >> a;
	if(cin.good() == false)
	{
	    cout << "Incorrect value!\n";
	    return 1;
	}
        sum += a;
    }

    cout << "Arithmetic mean of " << n << " numbers is " << (sum / n) << endl;

    return 0;
}

