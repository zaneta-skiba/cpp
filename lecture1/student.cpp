#include <iostream>
#include <string>

using namespace std;

int main()
{
    string first_name;            //Variables declaration
    string last_name;
    int index_number;
    int term;
    string field;

    cout << "Your first name: ";		 cin >> first_name;  //Enter user data
    cout << "Your last name: "; 		 cin >> last_name;
    cout << "Your index number: "; 		 cin >> index_number;
    cout << "Your term: "; 			 cin >> term;      
    getchar();
    cout << "Your field of study: "; 	         getline(cin, field);
                                                        
    cout << "Hi " << first_name << ' ' << last_name << "! ";       //Display user data on the screen
    cout << "Your index number is: " << index_number << ". ";
    cout << "You are on " << term << " term on " << field << '.' << endl;

    return 0;
}
