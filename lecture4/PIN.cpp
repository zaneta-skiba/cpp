#include <iostream>

using namespace std;

int main()
{
    string PIN;
    int attempts_number = 5;

    do
    {
        cout << "Enter PIN: ";
        cin >> PIN;

        if (PIN != "1234")
        {
            if (attempts_number > 0)
            {
                cout << "Number of attempts left: " << attempts_number;
                attempts_number--;
                cout << endl;
            }
            else
            {
                cout << "Password incorrect! No more attempts are allowed!\n";
		return 1;
            }
        }

        else
        {
            cout << "Correct!\n";
	    return 0;
        }
    }
    while (PIN != "1234");
}


