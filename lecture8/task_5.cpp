#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int arr[10] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};

    for(int i = 0; i < (sizeof(arr)/ sizeof(int)); i++)
    {
        cout << "Array[" << i+1 << "] = " << *(arr + i) <<  "   And its address: " << arr + i << endl;
    }
   
    return 0;
}

