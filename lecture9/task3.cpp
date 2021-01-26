/*Write a program that prompts the user for an integer.
Convert this number to binary. 
Count set bits (how many bits are "ones").*/

#include <iostream>

using namespace std;

string dec2bin(unsigned int x);
int count_set_bits(unsigned int x);

int main()
{
    unsigned int x;

    cout << "Enter an integer number: ";
    cin >> x;

    if (cin.good() == false)
    {
	cout << "Should be a positive integer\n";
	return 1;
    }

    cout << "Binary: " << dec2bin(x) << endl;
    cout << "Number of set bits: " << count_set_bits(x) << endl;
    return 0;
}

string dec2bin(unsigned int x)
{
    string result = "";
    do {
	if ((x & 1) == 0)
	    result = '0' + result;
	else
	    result = '1' + result;
	x = x >> 1;
    } while (x);
    return result;
}

int count_set_bits(unsigned int x)
{
    int amount = 0;
    do {
	if (x & 1U == 1)
            amount++;
	x = x >> 1;
    } while (x);
    return amount;
}
