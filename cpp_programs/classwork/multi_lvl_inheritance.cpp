#include<iostream>
#include<string>

class Employee
{
    protected:
     std::string name;
     int emp_id;

     protected:
      Employee():name("no name"),emp_id(0){}//Employee Default constructor
      Employee(std::string str,int emp):name(str),emp_id(emp){}//Employee Parameterised Constructor
      void SetDetails(std::string empname,int id)
      {
        name=empname;
        emp_id=id;
      }
      void displayDetails()
      {
        std::cout<<"Employee details are:\n";
        std::cout<<"Name:\t"<<name<<std::endl;
        std::cout<<"Emp id:\t"<<emp_id<<"\n"<<std::endl;
      }
};

class Manager: protected Employee
{
    protected:
    std::string department;

    Manager():Employee(),department("na"){}//Manager Default Constructor 
    Manager(std::string empname,int id,std::string departmnt):Employee(empname,id),department(departmnt){}//Manager Parameterised Constructor

    void SetManager(std::string empname,int id,std::string departmnt)
    {
        SetDetails(empname,id);
        department=departmnt;
    }
    void DisplayManagerDetails()
    {
        displayDetails();
        std::cout<<"Manager Details:\n";
        std::cout<<"Department:\t"<<department<<"\n"<<std::endl;
    }
};

class SeniorManager: protected Manager
{
    protected:
    int yearofexperience;

    public:
    SeniorManager():Manager(),yearofexperience(0){}//SeniorManager Default Constructor 
    SeniorManager(std::string empname,int id,std::string depart,int yof):Manager(empname,id,depart),yearofexperience(yof){}//SeniorManager Parameterised Constructor

     void setYof(std::string empname,int id,std::string depart,int yof)
     {
        SetManager(empname,id,depart);
        yearofexperience=yof;
     }
     void DisplaySeniorManager()
     {
        DisplayManagerDetails();
        std::cout<<"Senior Manager Details:\n";
        std::cout<<"Years of Experience:\t"<<yearofexperience<<std::endl;
     }
};

int main()
{
    SeniorManager S1;
    S1.setYof("Yash Awari",1001,"HR",5);
    S1.DisplaySeniorManager();

    return 0;
}