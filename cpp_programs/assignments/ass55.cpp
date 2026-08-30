#include<iostream>

template <class SalmanBhai>

class Base
{
    protected:
    SalmanBhai value;

    public:
    Base(SalmanBhai v):value(v){}

    void display()
    {
        std::cout<<"Value= "<<value<<std::endl;
    }
};

template <class SalmanBhai>
class Derived: public Base<SalmanBhai>
{
    SalmanBhai num;

    public:
    Derived(SalmanBhai no,SalmanBhai val):Base<SalmanBhai>(val),num(no){}

    void addition()
    {
        std::cout<<"Addition= "<<this->value+num<<std::endl;
    }
};

int main()
{
    Derived<int>d(10,45);

    d.display();
    d.addition();
}