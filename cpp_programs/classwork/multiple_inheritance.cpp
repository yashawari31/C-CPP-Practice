#include<iostream>

class A
{
    protected:
    int m;
     A():m(0){std::cout<<"A class default constructor invoked"<<std::endl;}
     A(int _m):m(_m){std::cout<<"A class parameterised constructor invoked"<<std::endl;}

     void showA()
     {
        std::cout<<"m:"<<m<<std::endl;
        std::cout<<"showA function called"<<std::endl;
     }
};

class B
{
    protected:
    int n;

    B():n(0){std::cout<<"B class default constructor invoked"<<std::endl;}
    B(int _n):n(_n){std::cout<<"B class parameterised constructor invoked"<<std::endl;}

    void showB()
    {
        std::cout<<"n:"<<n<<std::endl;
        std::cout<<"showB function called"<<std::endl;
    }
};

class C:public A,public B
{
    public:

    C():A(),B(){std::cout<<"C class default constructor invoked\n"<<std::endl;}
    C(int _m,int _n):A(_m),B(_n){std::cout<<"C class paramterised constructor invoked\n"<<std::endl;}
 

    void showC()
    {
        showA();
        showB();
        std::cout<<"showCfunction called\n"<<std::endl;
    }
};

int main()
{
    C c1;
    C c2(2,6);
  c1.showC();
  c2.showC();

  return 0;
}