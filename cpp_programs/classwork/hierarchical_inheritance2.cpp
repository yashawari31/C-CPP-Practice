#include<iostream>

class Vehicle
{
    protected:
    std::string vehicletype;
    float rate;


    Vehicle():vehicletype("no vehicle"),rate(0){std::cout<<"Vehicle default constructor called"<<std::endl; }
    Vehicle(std::string type,float _rate):vehicletype(type),rate(_rate){std::cout<<"Vehicle paramterised constructor called"<<std::endl;}

};

class Car:public Vehicle
{
  float fare;

  public:
  Car():Vehicle(){std::cout<<"Car default constructor invoked"<<std::endl;}
  Car(std::string type,float _rate):Vehicle(type,_rate){std::cout<<"Car parameterised constructor invoked"<<std::endl;}

  void Calculatefare(int hrs)
  {
    fare=hrs*300+rate;
    std::cout<<"Estimated fare cost by Car is:\tRs."<<fare<<"\t for"<<hrs<<"hrs"<<std::endl;
  }
  void Calculatefare(double km)
  {
    fare=50*km+rate;
    std::cout<<"Estimated fare cost by Car is:\tRs."<<fare<<"\t for"<<km<<"km"<<std::endl;
  }
}; 

class Bike:public Vehicle
{
    float fare;

    public:
    Bike():Vehicle(){std::cout<<"Bike default constructor invoked"<<std::endl;}
    Bike(std::string type,float _rate):Vehicle(type,_rate){std::cout<<"Bike parameterised constructor invoked"<<std::endl;}

    void Calculatefare(int hrs)
    {
        fare=hrs*100+rate;
        std::cout<<"Estimated fare cost by bike is:\tRs."<<fare<<"\t for"<<hrs<<"hrs"<<std::endl;

    }
    void Calculatefare(double km)
    {
        fare=25*km+rate;
        std::cout<<"Estimated fare cost by bike is:\tRs."<<fare<<"\t for"<<km<<"km"<<std::endl;

    }
};

int main()
{
    Car c1("SUV",2500);
    c1.Calculatefare(7);
    c1.Calculatefare(90.5);

    Bike b1("Cruiser",1000);
    b1.Calculatefare(8);
    b1.Calculatefare(300.0);
}


