/*
Create a class "distance" with following member variable 
-feet 
-inches 
Accept the details in 2 different objects by using parameteried constructor 
add the content of both the object and store it into the 3rd object.
*/
#include<iostream>

class Distance
{
  float feet;
  float inches;

  public:
  Distance():feet(0),inches(0){}//default ctor

  Distance(float f,float i):feet(f),inches(i){}//parameterised ctor

  Distance operator +(Distance& d )
  {
    Distance temp;
    temp.feet=feet+d.feet;
    temp.inches=inches+d.inches;

    return temp;
  }

  void display()
  {
    std::cout<<"distance is:\n";
    std::cout<<"Feet:"<<feet<<"Inches:"<<inches<<std::endl;
  }

};

int main()
{
    Distance d1(4,2.8);
    Distance d2(6.2,2.5);

    Distance d3=d1+d2;

    d1.display();
    d2.display();
    d3.display();

    return 0;
}