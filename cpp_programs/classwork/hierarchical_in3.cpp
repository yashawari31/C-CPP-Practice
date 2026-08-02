#include<iostream>

class Employee
{
    protected:
       int emp_id; 
       float salary;
       std::string emp_name;
    
    Employee():emp_id(0),salary(0.0f),emp_name("NULL"){std::cout<<"Employee default constructor invoked"<<std::endl;}
    Employee(int id,float base_sal,std::string name):emp_id(id),salary(base_sal),emp_name(name){std::cout<<"Employee paramterised constructor"<<std::endl;}   

  ~Employee(){std::cout<<"Employee destructor invoked\n"<<std::endl;}
};

class Manager:public Employee
{
  public:
    Manager():Employee(){std::cout<<"Manager default constructor invoked"<<std::endl;}
    Manager(int id,float base_sal,std::string name):Employee(id,base_sal,name){std::cout<<"Manager paramterised constructor invoked"<<std::endl;}

    float getSalary()const
    {
        return (salary+(0.1*salary));
    }
    void showDetails()
    {
        std::cout<<"Manager details:\t"<<std::endl;
        std::cout<<"Name:\t"<<emp_name<<std::endl;
         std::cout<<"Emp ID:\t"<<emp_id<<std::endl;
    }
    ~Manager(){std::cout<<"Manager destructor invoked\n"<<std::endl;}
};
class Engineer:public Employee
{
    public:
      Engineer():Employee(){std::cout<<"Engineer default constructor invoked"<<std::endl;}
      Engineer(int id,float base_sal,std::string name):Employee(id,base_sal,name){std::cout<<"Engineer paramterised constructor invoked"<<std::endl;}

    float getSalary()const
    {
        return (salary+(0.07*salary));
    }

     void showDetails()
    {
        std::cout<<"Engineer details:\t"<<std::endl;
        std::cout<<"Name:\t"<<emp_name<<std::endl;
         std::cout<<"Emp ID:\t"<<emp_id<<std::endl;
    }
    ~Engineer(){std::cout<<"Engineer destructor invoked\n"<<std::endl;}

};

int main()
{
    Manager M1(1001,90000,"Harsh");
    M1.showDetails();
    std::cout<<"Manager's Salary is:\t"<<M1.getSalary()<<std::endl;

    Engineer E1(1002,70000,"Ser Yash");
    E1.showDetails();
    std::cout<<"Engineer's Salary is:\t"<<E1.getSalary()<<std::endl;

}