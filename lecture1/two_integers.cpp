#include <iostream>

using namespace std;

int main()
{
    int a,b;       		                   //Declaration of two integers
    cout << "Please enter two integer numbers: ";  //Prompt user for two integers
    cin >> a >> b;                                 //Get two integers from user
    if (cin.good() == false)
    {
        cout << "Should be an integer!\n";
	return 1;
    }
    cout << "your numbers: " << a <<' ' << b << endl;    //Print variables on the screen
    return 0;
}

