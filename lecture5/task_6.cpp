#include<iostream>

using namespace std;

int main()
{
    string names[4];

    cout << "Enter 4 names:" << endl;

    for (int i = 0; i < 4; i++)                  // user enters the names
    {
        cout << "name " << i+1 <<": ";
        cin >> names[i];
    }

    for (int i = 0; i < 4; i++)
    {
        cout << names[i] << endl;                // display names on the screen
    }
    
    return 0;
}


