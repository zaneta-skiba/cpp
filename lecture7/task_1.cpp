#include <iostream>
#include <ctime>

using namespace std;

void generate(int arr[], int n);
int array_sum(int arr[], int s);

int main()
{
    int n = 20;
    int arr[n];
    generate(arr, n);
    cout << "sum = " << array_sum(arr, n) << endl;

     return 0;
}

void generate(int arr[], int n)
{
    srand(time(0));
    for(int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100;
        cout << "arr[" << i + 1 << "] = " << arr[i] << endl;
    }
}

int array_sum(int arr[], int s)
{
    int sum = 0;
    for(int i = 0; i < s; i++)
    {
       sum += arr[i];
    }
    return sum;
}

