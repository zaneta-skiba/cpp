#include <iostream>

void is_triangle(float, float, float);

using namespace std;

int main()
{
    float a, b, c;

    cout << "* * * * * VERIFY WHETHER THE 3 SEGMENTS CAN BUILD A TRIANGLE * * * * *\n";

    cout << "Enter 3 segments: ";
    cin >> a >> b >> c;

    if (cin.good() == false)
    {
        cout << "Should be a float!\n";
        return 1;
    }
    
    if (a <= 0 || b <= 0 || c <= 0)
    {
	cout << "The numbers should be positive!\n";
	return 2;
    }
    else
        is_triangle(a, b, c);

    return 0;
}

void is_triangle(float x, float y, float z)
{
    if (x + y > z && y + z > x && z + x > y)
        cout << "From length segments " << x << ' ' << y << ' ' << z << " triangle can be built!\n";
    else
        cout << "From length segments " << x << ' ' << y << ' ' << z << " triangle can't be built!\n";
}

