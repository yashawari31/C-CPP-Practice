#include<iostream>

class Demo
{
    int num;
    public:
    Demo():num(0){}
    Demo(int n):num(n){}

    friend std::istream& operator >>(std::istream& in,Demo& d);
    friend std::ostream& operator <<(std::ostream& out,Demo& d);
};

std::istream& operator >>(std::istream& in,Demo&d)
{
    in>>d.num;
    return in;
}
std::ostream& operator <<(std::ostream& out,Demo & d)
{
    out<<d.num;
    return out;
}
int main()
{
    Demo d1;
    Demo d2(56);
    std::cout<<"enter the num"<<std::endl;
    std::cin>>d1>>d2;

    std::cout<<"entered data:"<<std::endl;
    std::cout<<d1<<"\n"<<d2<<std::endl;
    return 0;
}