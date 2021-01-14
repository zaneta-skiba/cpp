#include<iostream>

using namespace std;

int main()
{
    double array[5];
    double sum = 0;
    float multipier;

    cout << "Enter 5 values to an array \n";

    for (int i = 0; i < 5; i++)
    {
        cout << "Value[" << i + 1 << "] = ";
        cin >> array[i];
	if (cin.good() == false)
	{
	    cout << "Incorrect value!\n";
	    return 1;
	}
        sum += array[i];
    }

    cout << "Enter a multipier: ";
    cin >> multipier;

    if (cin.good() == false)
    {
	cout << "Incorrect multiplier!\n";
	return 2;
    }

    cout << "The array before modification: \n";
    for (int j = 0; j < 5; j++)
    {
        cout << array[j] << endl;
    }

    cout << "The array after modification: \n";
    for (int l = 0; l < 5; l++)
    {
        cout << array[l] * multipier << endl;
    }

    return 0;
}

