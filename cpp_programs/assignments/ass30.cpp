#include<iostream>

class Numbers
{
    int num;

    public:
    Numbers():num(0){}
    Numbers(int n):num(n){}


    int operator +(Numbers &n)
    {
        return (num+n.num);
    }
    void display()
    {
        std::cout<<num;
    }

    
};

int main()
{
    Numbers First(90);
    Numbers Second(8);
    First.display();
    Second.display();
    std::cout<<"Addition of two numbers is:"<<First+Second;
}