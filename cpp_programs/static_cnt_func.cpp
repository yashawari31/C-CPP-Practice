#include <iostream>
using namespace std;

class Demo
{
private:
    static int count;

public:
    Demo()
    {
        count++;
    }

    static void cnt()
    {
        cout << "Count = " << count << endl;
    }
};

int Demo::count = 0;

int main()
{
    cout << "Before creating objects:\n";
    Demo::cnt();

    Demo d1;
    cout << "After creating d1:\n";
    Demo::cnt();

    Demo d2;
    cout << "After creating d2:\n";
    Demo::cnt();

    Demo d3;
    cout << "After creating d3:\n";
    Demo::cnt();

    return 0;
}