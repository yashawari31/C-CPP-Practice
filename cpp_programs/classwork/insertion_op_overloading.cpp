#include<iostream>

class Demo
{
    int num;
    public:
    Demo():num(0){}
    Demo(int n):num(n){}

    friend std::ostream& operator <<(std::ostream& out,Demo& d);
};

std::ostream& operator <<(std::ostream& out,Demo&d)
{
    out<<d.num;
    return out;
}

int main()
{
    Demo d1;
    Demo d2(56);
    std::cout<<d1<<d2;
    return 0;
}