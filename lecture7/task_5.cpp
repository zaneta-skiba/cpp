#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{
    int N = 10;
    int arr[N];
    int counter = 0;

    srand(time(NULL));

    for(int i = 0; i < N; i++)
    {
        arr[i] = rand() % 10 + 1;       //Fill an array with the random numbers from 1 to 10
        cout << arr[i] << setw(4);

        if(arr[i] == 7)
        {
            counter++;                  //If number 7 appears in the array, counter += 1;
        }
    }

    if(counter > 0)
        cout << "\nGreat! You won!\n";
    else
        cout << "\nKeep trying!\n";

    return 0;
}


