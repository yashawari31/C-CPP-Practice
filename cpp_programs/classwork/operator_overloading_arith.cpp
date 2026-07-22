#include<iostream>

class Arithmetic
{
    int num;

    public:
    Arithmetic():num(0){}
    Arithmetic(int n):num(n){}
    
    Arithmetic operator +(Arithmetic &A)
    {
        Arithmetic temp;
        temp.num=num+A.num;
        return temp;
    }
    Arithmetic operator -(Arithmetic &A)
    {
        Arithmetic temp;
        temp.num=num-A.num;
        return temp;
    }
    Arithmetic operator *(Arithmetic &A)
    {
        Arithmetic temp;
        temp.num=num*A.num;
        return temp;
    }
    Arithmetic operator /(Arithmetic &A)
    {
        Arithmetic temp;
        temp.num=num/A.num;
        return temp;
    }

    void show()
    {
        std::cout<<num<<std::endl;
    }
    
};

int main()

{
  Arithmetic A1(17);
  Arithmetic A2(5);
  Arithmetic A3=A1+A2;
  A3.show();

  Arithmetic A4=A3*A1-A2;
  A4.show();

  return 0;
}