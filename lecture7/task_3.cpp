#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

void generate(int arr[], int n);
void even_numbers(int arr[], int s);

int main()
{
    int n = 20;
    int arr[n];

    generate(arr, n);
    cout << "even numbers: " ;
    even_numbers(arr, n);

    return 0;
}

void generate(int arr[], int n)
{
    srand(time(0));
    for(int i = 0; i < n; i++)
    {
        arr[i] = rand() % 21 - 10;
        cout << "arr[" << i + 1 << "] = " << arr[i] << endl;
    }
}

void even_numbers(int arr[], int s)
{
    for(int i = 0; i < s; i++)
    {
        if(arr[i] % 2 == 0)
        cout << arr[i] << setw(4);
    }
    cout << endl;
}



