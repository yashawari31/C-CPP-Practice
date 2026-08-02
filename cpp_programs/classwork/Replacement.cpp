#include <iostream>
#include <math.h>

class Quadrilateral{
    protected:
        float s1,s2,s3,s4;
    
        Quadrilateral():s1(0),s2(0),s3(0),s4(0){std::cout<<"Quadrilateral default constructor invoked"<<std::endl;}
        Quadrilateral(float S1,float S2,float S3,float S4):s1(S1),s2(S2),s3(S3),s4(S4){std::cout<<"Quadrilateral parameterised constructor invoked"<<std::endl;}

        float area(){
            float s  = (s1+s2+s3+s4)/2;
            float area = sqrt((s-s1)*(s-s2)*(s-s3)*(s-s4));

            return area;

        }

        void show_sides(){
              std::cout<<"Side1:"<<s1;  
            std::cout<<"Side:"<<s2;
            std::cout<<"Side:"<<s3;
            std::cout<<"Side:"<<s4;

            std::cout<<"\nArea:\t"<<area()<<std::endl;
        }

};

class Rectangle:public Quadrilateral
{
    float length,breadth;

    public:
       Rectangle():length(0.0f),breadth(0.0f){std::cout<<"Rectangle default constrcutor invoked"<<std::endl;}
       Rectangle(float len,float bred):length(len),breadth(bred){std::cout<<"Rectangle parameterised constructor invoked"<<std::endl;}

    
    float Perimeter()
    {
        return (2*length+2*breadth);
    }   

    float Area()
    {
        return (length*breadth);
    }

    void showDetails()
    {
        std::cout<<"Rectangle details:"<<std::endl;
        std::cout<<"Length:\t"<<length<<"\n Breadth:\t"<<breadth<<std::endl;
    }
};

class Square:public Quadrilateral
{
    float side;

    public:
       Square():side(0.0f){std::cout<<"Square default constrcutor invoked"<<std::endl;}
       Square(float square_side):side(square_side){std::cout<<"Square parameterised constructor invoked"<<std::endl;}

    
    float Perimeter()
    {
        return (4*side);
    }   

    float Area()
    {
        return (side*side);
    }

    void showDetails()
    {
        std::cout<<"Square details:"<<std::endl;
        std::cout<<"Side:\t"<<side<<std::endl;
    }
};

int main()
{
    Rectangle r1(34.5f,25.0f);
    r1.showDetails();
    std::cout<<"Area of Rectangle:\t"<<r1.Area()<<std::endl;
    std::cout<<"Perimeter of Rectangle:\t"<<r1.Perimeter()<<std::endl;

    Square s1(25.0f);
    s1.showDetails();
     std::cout<<"Area of Square:\t"<<s1.Area()<<std::endl;
    std::cout<<"Perimeter of Square:\t"<<s1.Perimeter()<<std::endl;

    return 0;
}