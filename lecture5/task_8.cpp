#include<iostream>
#include<iomanip>

using namespace std;

bool czy_pierwsza(int);

int main()
{
    int liczby_pierwsze[20];
    int i = 0;

    for (int j = 0; j > -1 ; j++)        //An infinite loop
    {
	if (i == 20)
	{
	    break;                       //Break the infinite loop
	}

    	if (czy_pierwsza(j) == true)
        {  
            liczby_pierwsze[i] = j;    //Fill the table with prime numbers         
            i++;
        }
        else
        {
            continue;
        }
    }

    for (int k = 0; k < 20; k++)
    {
         cout << liczby_pierwsze[k] << setw(4);   //Display table on the screen
    }

    cout << endl;

    return 0;
}

bool czy_pierwsza(int liczba)
{
    if (liczba < 2)
    {
        return false;
    }
    else
    {
        for (int i = 2; i < liczba; i++)
        {
            if (liczba % i == 0)
            {
                return false;
            }
        }
        return true;
    }
}
