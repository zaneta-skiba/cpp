#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

void generate(int arr[], int n);
void print(int arr[], int n);
void selection_sort(int arr[], int s);
double median(int arr[], int k);

int main()
{
    int n;
    cout << "array size: ";
    cin >> n;
    int arr[n];

    generate(arr, n);
    print(arr, n);

    selection_sort(arr, n);
    print(arr, n);
    cout << "Median = " << median(arr, n) << endl;

    return 0;
}

void generate(int arr[], int n)
{
    srand(time(0));
   
    for(int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100;
    }
}

void print(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << "arr[" << i + 1 << "] = " << arr[i] << endl;
    }
    cout << endl;
}

void selection_sort(int arr[], int s)
{
    for(int i = 0; i < s; i++)
    {
        int min = arr[i];
        
        for(int j = i + 1; j < s; j++)
        {
            if (min > arr[j])
            {
                min = arr[j];
                swap(arr[i], arr[j]);
            }
        }
    }
}
double median(int arr[], int k)
{
    double med = 0;

    if (k % 2 == 0)
    {
        med = (arr[k / 2] + arr[k / 2 - 1]) / 2.0;
    }
    else
    {
        med = arr[(k - 1) / 2];
    }
    
    return med;
}



