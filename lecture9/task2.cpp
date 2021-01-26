/*Write a program that prints the result of bitwise operations: AND, OR, XOR, for user specified two positive integers.
Display the result on the screen as decimal and binary numbers.*/

#include <iostream>

using namespace std;

string dec2bin(unsigned short int x);

int main()
{
    unsigned short int first_value, second_value, answear;

    cout << "Enter the first decimal number: ";
    cin >> first_value;
    if (cin.good() == false)
    {
        cout << "Should be a positive integer\n";
	return 1;
    }
    cout << "Its binary form is: " << dec2bin(first_value) << endl;

    cout << "Enter the second decimal number: ";
    cin >> second_value;
    if(cin.good() == false)
    {
	cout << "Should be a positive integer\n";
	return 1;
    }
    cout << "Its binary form is: " << dec2bin(second_value) << endl;
  
    cout << "What kind of bitwise operation do you want to perform on these numbers?\n";
    cout << "1 - AND\n2 - OR\n3 - XOR\n";
    cin >> answear;
    
    switch(answear){
    case 1:
        cout << "Decimal: " << (first_value & second_value) << endl;
	cout << "Binary: " << dec2bin(first_value & second_value) << endl;
	break;
    case 2:
        cout << "Decimal: " << (first_value | second_value) << endl;
	cout << "Binary: " << dec2bin(first_value | second_value) << endl;
	break;
    case 3:
	cout << "Decimal: " << (first_value ^ second_value) << endl;
	cout << "Binary: " << dec2bin(first_value ^ second_value) << endl;
	break;
    default:
	cout << "Incorrect choice\n";
	break;
    }
    return 0;
}

string dec2bin(unsigned short int x)
{
    string result = "";
    do {
	if ((x & 1) == 0)
	    result = '0' + result;
	else
	    result = '1' + result;
	x = x >> 1;
    } while(x);
    return result;
}
