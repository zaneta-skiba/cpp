#include "header.h"

int main()
{
    int N = 3;
    Weather information[N];
    Weather *ptr = information;

    cout << "Enter the weather data 3 times!" << endl;
  
    for (int i = 0; i < N; i++)
    { 
        information[i] = getData(information[i]);
    }
    
    for (int j = 0; j < N; j++)
    { 
        cout << "*** Weather information display by pointer ***" << endl;	    
        displayData(&information[j]);
    }
    
    
    return 0;
}
