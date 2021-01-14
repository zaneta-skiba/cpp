#include <iostream>
#include <ctime>

using namespace std;

void generate(int arr[], int n);
int min(int arr[], int s);
int max(int arr[], int s);

int main()
{
    int n = 20;
    int arr[n];

    generate(arr, n);
    cout << "max = " << max(arr, n) << endl;
    cout << "min = " << min(arr, n) << endl;

    return 0;
}

void generate(int arr[], int n)
{
    srand(time(0));
    for(int i = 0; i < n; i++)
    {
        arr[i] = rand() % 1000;
        cout << "arr[" << i + 1 << "] = " << arr[i] << endl;
    }
}

int min(int arr[], int s)
{
    int temp = arr[0];
    for(int i = 0; i < s; i++)
    {
       if(temp > arr[i])
        temp = arr[i];
    }
    return temp;
}

int max(int arr[], int s)
{
    int temp = arr[0];
    for(int i = 0; i < s; i++)
    {
       if(temp < arr[i])
       temp = arr[i];
    }
    return temp;   
}
