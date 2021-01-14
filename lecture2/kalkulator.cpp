#include <iostream>

using namespace std;

float x, y;
char wybor;

int main()
{
    for(;;)
    {
    	cout << "Menu glowne: \n";
    	cout << "------------ \n";
    	cout << "1.Dodawanie \n";
    	cout << "2.Odejmowanie \n";
    	cout << "3.Mnozenie \n";
    	cout << "4.Dzielenie \n";
    	cout << "5. Koniec programu \n";
    	cout << "Twoj wybor: ";
    	wybor = getchar();
    	cout << endl;

   	switch(wybor)
   	{
            case '1':
            {
                cout << "Wpisz 2 liczby!" << endl;
            	cout << "Wpisz pierwsza liczbe: ";
            	cin >> x;
            	cout << "Wpisz druga liczbe: ";
            	cin >> y;
            	cout << "Suma: " << x + y;
            	break;
            }
            case '2':
            {
            	cout << "Wpisz 2 liczby!" << endl;
            	cout << "Wpisz pierwsza liczbe: ";
            	cin >> x;
            	cout << "Wpisz druga liczbe: ";
            	cin >> y;
		cout << "Roznica: " << x - y;
            	break;
            }
            case '3':
            {
            	cout << "Wpisz 2 liczby!" << endl;
            	cout << "Wpisz pierwsza liczbe: ";
            	cin >> x;
            	cout << "Wpisz druga liczbe: ";
            	cin >> y;
            	cout << "Iloczyn: " << x * y;
            	break;
            }
            case '4':
            {
            	cout << "Wpisz 2 liczby!" << endl;
            	cout << "Wpisz pierwsza liczbe: ";
            	cin >> x;
            	cout << "Wpisz druga liczbe: ";
            	cin >> y;
         	    if (y == 0)
            		cout << "Nie dziel przez zero!" << endl;
                    else
            		cout << "Iloraz: " << x / y;
         	break;
       	    }
            case '5':
                return 0;
            default:
        	cout << "Nie ma takiej opcji w menu!" << endl;
        }
    	getchar(); getchar();
    	system("cls");
    }
}

