#include <iostream>

template <class SalmanBhai>
class Demo
{
private:
    SalmanBhai value;

public:
    Demo(SalmanBhai v)
    {
        value = v;
    }

    void display()
    {
        std::cout << "Value = " << value << std::endl;
    }
};

int main()
{
    Demo<int> d1(10);
    Demo<double> d2(20.5);
    Demo<char> d3('A');

    d1.display();
    d2.display();
    d3.display();

    return 0;
}