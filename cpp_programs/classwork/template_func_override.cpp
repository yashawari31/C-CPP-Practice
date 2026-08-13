#include<iostream>

class Demo
{
   public:
   void display(int x)
   {
    std::cout<<"Normal function invoked & and value is:"<<x<<std::endl;
   }

   template<class t>

   void display(t x)
   {
    std::cout<<"Template function invoked & value of x:"<<x<<std::endl;
   }
};

int main()
{
    Demo d1;
    d1.display(23.4);

    Demo d2;
    d2.display(34);
}