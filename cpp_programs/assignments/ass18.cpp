#include <iostream>
using namespace std;

class Demo
{
private:
    int a, b;

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
        a=0;
        b=0;
    }
    void show()
    {
        cout << "Value of a = " << a << endl;
        cout << "Value of b = " << b << endl;
    }
};


int main()
{
    Demo d1(10, 20);   // Parameterized constructor sets values
    Demo d2;           // Default constructor 
     d1.show();
     d2.show();
    return 0;
}