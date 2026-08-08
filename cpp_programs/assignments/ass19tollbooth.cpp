/*
Imagine a toll booth at a bridge, a car passing by the booth is expected to pay a toll.
The toll booth keep a track of the number of cars that passed by the toll booth and the total amount of cash collected

Create a C++ class "tollBooth" with following member variables
-total number of cars passed 
-total amount collected


Write a necessary member functions 
-a constructor that initialise both member variable to 0.
-payingCars(), 
{
if any car passed throgh the toll booth, that much amount gets added into the toll collected and total number of cars passed gets incremented by 1. 
}
-nonPayingCars()
{
  It increments in the Total cars passed but not in the total amount collected
}
-display()
{
   display total number of cars passed and total amount collected 
}

*/
#include<iostream>
class tollBooth
{
 static int total_cars_passed;
  static double total_amount_collected;

  public:
  tollBooth(){}
  
  void payingCars()
  {
    total_cars_passed++;
    total_amount_collected+=150;
  }
  void nonpayingCars()
  {
    total_cars_passed++;
  }
  void Display()
  {
    std::cout<<"Total Cars passed:\t"<<total_cars_passed<<std::endl;
    std::cout<<"Total Amount collected from Cars:\t"<<total_amount_collected<<std::endl;
  }
};
int tollBooth::total_cars_passed=0;
double tollBooth::total_amount_collected=0;

int main()
{
  tollBooth t1;
  t1.payingCars();
  tollBooth t2;
  t2.nonpayingCars();
  tollBooth t3;
  t3.payingCars();

  t3.Display();
  return 0;
}