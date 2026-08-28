/*

	- Write a program that calculate annual Tax for different types of vehicles using function overriding and multilevel inheritance.
	
	- Following are the classes: 
	
	- Base clas: vehicle: 
			- Member veriables : - string registratioNumber
								 - string ownerName
								 - double baseTax
            - A vertual function CalculateTax() which calculates the tax as a base tax.
			
	- Derived class: Car: Inherited from class "Vehicle"
			- Member variables: - double luxuaryTax 	
			
			- Overrides calculateTax() to add the luxuaryTax.
			
	- Derived class: ElectricCar: Inherited from class "Car"		
			- Member Variable: double environmentalSubsidy
			
			- override calculateTax() to subtract the environmentalSubsidy. 
			
			
	- Requirements: 
		Take input for each vehicle type, registratioNumber, ownerName, baseTax, luxuaryTax, environmentalSubsidy.
		
	- Create instances of Vehicle, Car and ElectricCar and CalculateTax for each dynamically using function overriding.	


*/
#include<iostream>

class Vehicle
{
    protected:
    std::string registrationNumber;
    std::string ownerName;
    double baseTax;

    public:
    Vehicle():registrationNumber("no"),ownerName("no"),baseTax(0){}
    Vehicle(std::string rno,std::string owner,double tax):registrationNumber(rno),ownerName(owner),baseTax(tax){}

     virtual double CalculateTax() 
    {
        return baseTax;
    }
     virtual void displayDetails() 
    {
        std::cout<<"Vehicle Details are:"<<std::endl;
        std::cout<<"Vehicle Registration number: "<<registrationNumber<<std::endl;
        std::cout<<"Vehicle Owner: "<<ownerName<<std::endl;
        std::cout<<"Base Tax on Vehicle: "<<baseTax<<std::endl;
    }
};

class Car:public Vehicle
{
    protected:
    double luxuryTax;

    public:
    Car():Vehicle(),luxuryTax(0){}
    Car(std::string rno,std::string owner,double tax,double luxurytax):Vehicle(rno,owner,tax),luxuryTax(luxurytax){}

     double CalculateTax() override
    {
        return (baseTax+luxuryTax);
    }
     void displayDetails() override
    {
        std::cout<<"Car Details are:"<<std::endl;
        std::cout<<"Car Registration number: "<<registrationNumber<<std::endl;
        std::cout<<"Car Owner: "<<ownerName<<std::endl;
        std::cout<<"Base Tax on Car: "<<baseTax<<std::endl;
        std::cout<<"Car's Luxury tax: "<<luxuryTax<<std::endl;
    }

};

class ElectricCar:public Car
{
    double environmentalSubsidy;

    public:
    ElectricCar():Car(),environmentalSubsidy(0){}
    ElectricCar(std::string rno,std::string owner,double tax,double luxurytax,double evsSubsidy):Car(rno,owner,tax,luxurytax),environmentalSubsidy(evsSubsidy){}

     double CalculateTax() override
    {
            return (baseTax-environmentalSubsidy+luxuryTax);
        
    }
     void displayDetails() override
    {
        std::cout<<"ElectricCar Details are:"<<std::endl;
        std::cout<<"ElectricCar Registration number: "<<registrationNumber<<std::endl;
        std::cout<<"ElectricCar Owner: "<<ownerName<<std::endl;
        std::cout<<"Base Tax on ElectricCar: "<<baseTax<<std::endl;
        std::cout<<"Car's Luxury tax: "<<luxuryTax<<std::endl;
        std::cout<<"Environmental Subsidy on ElectricCar: "<<environmentalSubsidy<<std::endl;
    }
};

int main()
{
    Vehicle truck("S5000569","Sunny Deol",30000);
     
    truck.displayDetails();
    std::cout<<"The Tax on truck is:"<<truck.CalculateTax()<<std::endl;

    std::cout<<std::endl;

    Car Swift("WENJG6475886","Harsh Khilari",20000,1500);
    Vehicle &SWIFt=Swift;
    SWIFt.displayDetails();
    std::cout<<"The total Tax on a Car is: "<<SWIFt.CalculateTax()<<std::endl;

     std::cout<<std::endl;


    ElectricCar Be6("GEOJ568373","Yash Awari",34000,4500,8000);
    Vehicle &BE6=Be6;
    BE6.displayDetails();
    std::cout<<"The total tax after subsidy is: "<<BE6.CalculateTax()<<std::endl;
}