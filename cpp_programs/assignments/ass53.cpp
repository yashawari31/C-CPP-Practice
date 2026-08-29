#include <iostream>

template <class T>
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
        std::cout << "General template: " << value << std::endl;
    }
};


// Template specialization for char
template <>
class Demo<char>
{
private:
    char value;

public:
    Demo(char v)
    {
        value = v;
    }

    void display()
    {
       std::cout << "Specialized template: " << value << std::endl;
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