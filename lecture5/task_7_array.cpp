#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int array[10][10];

    cout << "Tabliczka mnozenia\n";
    cout << setw(4);

    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            array[i][j] = (j + 1) * (i + 1);  //przypisanie wartosci do tablicy
            cout << array[i][j] << setw(4);   //wyswietlenie tablicy
        }
        cout << endl;
    }

    return 0;
}
