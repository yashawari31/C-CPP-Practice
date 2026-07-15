#include <iostream>

class Demo
{
private:
    static int count;

public:
    void increment()
    {
        count++;
       std:: cout << "Count after increment = " << count << std::endl;
    }

    void decrement()
    {
        count--;
        std::cout << "Count after decrement = " << count <<std:: endl;
    }
};

int Demo::count = 0;

int main()
{
    Demo d1, d2;

    d1.increment();
    d2.increment();
    d1.increment();

    d2.decrement();
    d1.decrement();

    return 0;
}