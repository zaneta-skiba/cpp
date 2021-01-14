/*Ptogram displays text "hello world!" on the screen*/
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string name;
    cout << "Hello world!\n"; // display text "hello world" on the screen
    cout << "What's your name: ";
    cin >> name;
    cout << "Hello " << name <<endl;  // display text "hello <user_name>" on the screen
    return 0;
}


