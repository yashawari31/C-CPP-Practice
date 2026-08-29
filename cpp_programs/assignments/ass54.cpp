#include <iostream>
using namespace std;

template <class T = int>
class Demo
{
private:
    T value;

public:
    Demo(T v)
    {
        value = v;
    }

    void display()
    {
        cout << "Value = " << value << endl;
    }
};

int main()
{
    Demo<> d1(10);        // T = int (default)
    Demo<double> d2(20.5);

    d1.display();
    d2.display();

    return 0;
}