#include<iostream>

class demo
{
    int a;
    public:
    demo():a(0){}//default constructor
    demo(int x):a(x){}//parameterized constructor
    demo(demo &d)  //copy constructor
    {
        this->a=d.a;
    }
    void display()
    {
        std::cout<<"a="<<a<<std::endl;
    }
};

int main()
{
    demo d1;
    d1.display();
    demo d2(10);    
    d2.display();
    demo d3(d2);
    d3.display();

    return 0;

}