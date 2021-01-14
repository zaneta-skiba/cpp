#include <iostream>

void even_odd(int);

using namespace std;

int main()
{
   int a;
   cout << "Enter an integer number: ";
   cin >> a;

   if (cin.good() == false)
   {
       cout << "Should be an integer!\n";
       return 1;
   }
   else
       even_odd(a);

   return 0;
}

void even_odd(int x)
{
    if (x % 2 == 0)
        cout << x << " is even number\n";
    else
        cout << x << " is odd number\n";

}
