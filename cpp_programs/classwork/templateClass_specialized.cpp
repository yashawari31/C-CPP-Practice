#include <iostream>

template <class SalmanBhai>
class Display
{
public:
    void show(SalmanBhai value)
    {
         std::cout << "template class for Display" << std::endl;
        std::cout << "Value = " << value << std::endl;
    }
};

template <>
class Display<std::string>
{
public:
    void show(std::string value)
    {
        std::cout << "Specialized class for string" << std::endl;
        std::cout << "Value = " << value << std::endl;
    }
};

int main()
{
    Display<float> d1;
    Display<int> d2;
    Display<std::string>d3;

    d1.show(10.5);
    d2.show(10);
    d3.show("King in the north");
    return 0;
}