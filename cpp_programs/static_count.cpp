#include<iostream>

class Demo
{
    static int count;

    public:
    Demo()
    {
        count++;
    }
    void show()
    {
        std::cout<<"number of objects:"<<count<<std::endl;
    }
};

int Demo :: count=0;

int main()
{
   Demo d1,d2,d3;
   d3.show();
    return 0;
}
