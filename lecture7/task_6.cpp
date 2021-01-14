#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

void fill_array(int arr[], int S);
void check_meshes(int arr[], int S, int tab[]);
void print_results(int tab[]);

int main()
{
    int N = 1000;
    int arr[N];
    int tab[6] = {0, 0, 0, 0, 0, 0};       // tab[0] means the value '1' on the cube and tab[5] -> value 6. 
                                           // it stores the TOTAL amount of these values thrown, that's why initial value = 0.

    fill_array(arr, N);
    check_meshes(arr, N, tab);
    print_results(tab);

    return 0;
}

void fill_array(int arr[], int S)
{
    srand(time(NULL));

    for(int i = 0; i < S; i++)
    {
        arr[i] = rand() % 6 + 1;           // fill an array with the random numbers from 1 - 6
    }
}

void check_meshes(int arr[], int S, int tab[])
{
    for (int i = 0; i < S; i++)
    {
        tab[arr[i] - 1] += 1;              //  tab[0] means number '1' on the cube;
    }                                      // if arr[i] == 1, then tab[0] is incremented by 1;
}

void print_results (int tab[])
{
    cout << "Amount of thrown: \n";
    
    for (int i = 0; i < 6; i++)
    {
        cout << i + 1 << " = " << tab[i] << endl;
    }
}


