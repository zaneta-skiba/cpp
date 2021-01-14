#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    cout << "Tabliczka mnozenia\n";	
    cout << setw(4);

    for(int i = 1; i <= 10; i++)
    {
        for(int j = 1; j <= 10; j++)
        {
            cout << j * i << setw(4);
        }
        cout << endl;
    }
    return 0;
}

