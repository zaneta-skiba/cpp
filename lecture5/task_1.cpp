#include <iostream>

using namespace std;

int main()
{
    int array1[5] = {13, 2, 45, 23, 12};                       //Define array size by specifying size
    for(int i = 0; i < 5; i++)
    {
        cout << "array1[" << i << "] = " << array1[i] << endl;
    }

    int x;
    cout << "\nPodaj wartosc tablicy: ";
    cin >> x;
    int array2[x];                                             //Define array size specified by a user
    
    for(int i = 0; i < x; i++)
    {
        cout << "Podaj element tablicy: ";
        cin >> array2[i];
    }
    for(int j = 0; j < x; j++)
    {
        cout << "array2[" << j << "] = " << array2[j] << endl;
    }

    int array3[] = {1, 2};                                    //Define array size by initializing elements
    cout << "\ntablica3[0] = " << array3[0] << endl;             
    cout << "tablica3[1] = " << array3[1] << endl;
    cout << "Ilosc elementow w tablicy = " << sizeof(array3) / sizeof(int) << endl;
    return 0;
}
