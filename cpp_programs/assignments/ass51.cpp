#include <iostream>

template <class T1, class T2>
void display(T1 a, T2 b)
{
    std::cout << "First value: " << a << std::endl;
    std::cout << "Second value: " << b << std::endl;
}

int main()
{
    display(10, 20.5);

    return 0;
}