/*Write a program that displays the results of bit operations: NOT , >>, <<, for a user specified positive integer.
Display its binary form.
Display the result on the screen as decimal and binary numbers.*/

#include <iostream>

using namespace std;

string dec2bin(unsigned int m);

int main()
{
    unsigned int decimal;
    unsigned short int answear;
    short int x;
    
    //Prompt user for an integer
    cout << "Enter an integer: ";
    cin >> decimal;

    //Check if the number is an integer
    if(cin.good() == false)
    {
	cout << "Should be an integer!\n";
	return 1;
    }

    //Display user's number in binary
    cout << "Binary: " << dec2bin(decimal) << endl;

    cout << "What bitwise operation do you want to perform on this number?\n";
    cout << "1 - NOT\n2 - >>\n3 - <<\n";
    cin >> answear;

    switch(answear){
    case 1:
        cout << "Decimal: " << ~(decimal) << endl;
	cout << "Binary: " << dec2bin(~(decimal)) << endl;
	break;
    case 2:
	cout << "How many places should I move? ";
	cin >> x;
	cout << "Decimal: " << (decimal >> x) << endl;
	cout << "Binary: " << dec2bin(decimal >> x) << endl;
	break;
    case 3:
	cout << "How many places should I move? ";
	cin >> x;
	cout << "Decimal: " << (decimal << x) << endl;
	cout << "Binary: " << dec2bin(decimal << x) << endl;
	break;
    default:
	cout << "Incorrect choice\n";
	break;
    }
    return 0;
}
//Convert decimal number to binary
string dec2bin(unsigned int m)
{
    string result = "";
    do {
	if ((m & 1) == 0)    // m % 2
	    result = '0' + result;
	else
	    result = '1' + result;
	m = m >> 1;         //m = m/2
    } while(m);
    return result;
}
