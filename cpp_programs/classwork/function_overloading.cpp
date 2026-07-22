#include<iostream>

class demo
{
    int a;
    int c;
    float b;
    float d;
    public:
    int add(int a, int b)
    {
       std::cout<<"int addition:";
         return a+b;
    }
    float add(float a, float b)
    {
        std::cout<<"float addition:";
        return a+b;
    }
};
 int main(void)
 {
    demo d;
    std::cout<<d.add(10,20)<<std::endl;
    std::cout<<d.add(10.5f,20.5f)<<std::endl;
    return 0;
 }