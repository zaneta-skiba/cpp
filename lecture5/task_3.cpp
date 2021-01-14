#include<iostream>

using namespace std;

int main()
{
    double array[5];
    double sum = 0;

    cout << "Enter 5 values and I will calculate the average \n";

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

    cout << "The average is: " << sum/5.0 << endl;
        
    return 0;
}
