#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int arr[3] = {1, 3, 5};
    int *p = arr;

    for(int i = 0; i < 3; i++)
    {
        cout << "Array[" << i+1 << "] = " << *(p + i) <<  " And its address: " << p + i << endl;
    }
    return 0;
}


