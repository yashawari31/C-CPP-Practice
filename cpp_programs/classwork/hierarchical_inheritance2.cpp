#include<iostream>

class Vehicle
{
    protected:
    std::string vehicletype;
    float weight;


    Vehicle():vehicletype("no vehicle"),weight(0){std::cout<<"Vehicle default constructor called"<<std::endl; }
    Vehicle(std::string type,float weigh):vehicletype(type),weight(weigh){std::cout<<"Vehicle paramterised constructor called"<<std::endl;}

};

class Car:public Vehicle
{
  float fare;

  public:
  Car():Vehicle(){std::cout<<"Car default constructor invoked"<<std::endl;}
  Car(std::string type,float weigh):Vehicle(type,weigh){std::cout<<"Car parameterised constructor invoked"<<std::endl;}

  void Calculatefare(int hrs,float km)
  {
    fare=hrs*300+km*10;
    std::cout<<"Estimated Fare cost by car is:\tRs."<<fare<<std::endl;
  }
}; 

class Bike:public Vehicle
{
    float fare;

    public:
    Bike():Vehicle(){std::cout<<"Bike default constructor invoked"<<std::endl;}
    Bike(std::string type,float weigh):Vehicle(type,weigh){std::cout<<"Bike parameterised constructor invoked"<<std::endl;}

    void Calculatefare(int hrs,float km)
    {
        fare=hrs*100+km*10;
        std::cout<<"Estimated fare cost by bike is:\tRs."<<fare<<std::endl;

    }
};

int main()
{
    Car c1("SUV",2000);
    c1.Calculatefare(5,90.5);

    Bike b1("Cruiser",200);
    b1.Calculatefare(8,200);
}


