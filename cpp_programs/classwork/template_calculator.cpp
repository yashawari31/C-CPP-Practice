#include<iostream>

template<class SalmanBhai>

class Calculator
{
    SalmanBhai value1;
    SalmanBhai value2;

    public:
    Calculator():value1(0),value2(0){}
    Calculator(SalmanBhai val1,SalmanBhai val2):value1(val1),value2(val2){}

    SalmanBhai add()
    {
        return (value1+value2);
    }
    SalmanBhai subtract()
    {
        if(value1>value2)
            return (value1-value2);
        
        else
            return (value2-value1);    
    }
    SalmanBhai multiply()
    {
        return (value2*value1);
    }
    SalmanBhai divide()
    {
        if(value2!=0)
        {
            return (value1/value2);
        }
        else{
            std::cout<<"Infinity";
            return -1;
        }
           
    }
};

int main()
{
    Calculator<int>integers(120,45);
    std::cout<<"Addition:"<<integers.add()<<std::endl;
    std::cout<<"Substraction:"<<integers.subtract()<<std::endl;
    std::cout<<"Multiplication:"<<integers.multiply()<<std::endl;
    std::cout<<"Division:"<<integers.divide()<<std::endl;
}