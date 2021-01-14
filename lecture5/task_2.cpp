#include<iostream>

using namespace std;

int main()
{
    int array[] = {1,2,3,4,5,6,7,8,9,10};

    cout << "The first element of the array: " << array[0] << endl;
    cout << "The fourth element of the array: " << array[3] << endl;
    cout << "The last element of the array: " << array[9] << endl;

    cout << "All array elements in order: \n";
    for(int i = 0; i < sizeof(array)/sizeof(int); i++)
    {
        cout << array[i] << endl;
    }

    cout << endl;
    cout << "All array elements in reverse order: \n";
    for(int j = sizeof(array)/sizeof(int) - 1; j >= 0; j--)
    {
        cout << array[j] << endl;
    }

}

