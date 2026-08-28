#include<iostream>

template<class SalmanBhai>

SalmanBhai compare(SalmanBhai a,SalmanBhai b)
{
    if(a>b)
    {
        return a;
    }
    else 
        return b;
}

int main()
{
    int a;
    std::cin>>a;
    int b;
    std::cin>>b;
    
    std::cout<<"greater number is"<<compare(a,b);
}