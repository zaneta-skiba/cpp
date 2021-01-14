#include <iostream>

using namespace std;

int main()
{
    bool boolean = true;
    char character = 'a';
    int integer = 34;
    float floating_point = -5.1;
    double double_floating = 3.141516;

    cout << "Data type boolean has value equals " << boolean <<" and size equals " << sizeof(bool) << endl;  //sizeof(boolean)
    cout << "Data type character has value equals " << character <<" and size equals " << sizeof(char) << endl;
    cout << "Data type integer has value equals " << integer <<" and size equals " << sizeof(int) << endl;
    cout << "Data type floating point has value equals " << floating_point <<" and size equals " << sizeof(float) << endl;
    cout << "Data type double floating has value equals " << double_floating <<" and size equals " << sizeof(double) << endl;
    return 0;
}
