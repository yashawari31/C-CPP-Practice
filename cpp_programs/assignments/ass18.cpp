#include <iostream>
using namespace std;

class Demo
{
private:
    static int a, b;

public:
    // Parameterized Constructor
    Demo(int x, int y)
    {
        a = x;
        b = y;
    }

    // Default Constructor
    Demo()
    {
        cout << "Value of a = " << a << endl;
        cout << "Value of b = " << b << endl;
    }
};

int Demo::a = 0;
int Demo::b = 0;

int main()
{
    Demo d1(10, 20);   // Parameterized constructor sets values
    Demo d2;           // Default constructor displays values

    return 0;
}