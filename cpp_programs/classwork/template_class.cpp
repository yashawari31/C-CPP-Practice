#include<iostream>
template<class T,class F>
class Pair
{
    T a;
    F b;
    
    public:
    Pair():a(0),b(0){}
    Pair(T _a,F _b):a(_a),b(_b){}

    void display()
    {
        std::cout<<"a="<<a<<std::endl;
        std::cout<<"b="<<b<<std::endl;
    }
    
    void swap()
    {   T temp;
         
        if(std::is_same<T,F>::value)
        {
          
          temp=a;
          a=b;
          b=temp;
        }
        else{
            std::cout<<"Different data types"<<std::endl;
        }
    }
};

int main()
{
    Pair<int,float> p(23,23.4f);
    p.display();

    Pair <int,int>p1(23,56);
    p1.swap();
    p1.display();

    return 0;

}