#include "header.h"

int main()
{
    int N = 3;
    Weather information[N];
    cout << "Enter the weather data 3 times!" << endl;
  
    for (int i = 0; i < N; i++)
    { 
        information[i] = getData(information[i]);
    }
    
    for (int j = 0; j < N; j++)
    { 
        cout << "*** Weather information ***" << endl;	    
        displayData(information[j]);
    }
    
    
    return 0;
}
