#include<iostream>

class Employee
{
    protected:
       int emp_id; 
       float salary;
       std::string emp_name;
    public:
    Employee():emp_id(0),salary(0.0f),emp_name("NULL"){std::cout<<"Employee default constructor invoked"<<std::endl;}
    Employee(int id,float base_sal,std::string name):emp_id(id),salary(base_sal),emp_name(name){std::cout<<"Employee paramterised constructor"<<std::endl;}   
 virtual void showDetails()
    {
        std::cout<<"Name:\t"<<emp_name<<std::endl;
         std::cout<<"Emp ID:\t"<<emp_id<<std::endl;
    }
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
    virtual void showDetails()
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

    virtual void showDetails()
    {
        std::cout<<"Engineer details:\t"<<std::endl;
        std::cout<<"Name:\t"<<emp_name<<std::endl;
         std::cout<<"Emp ID:\t"<<emp_id<<std::endl;
    }
    ~Engineer(){std::cout<<"Engineer destructor invoked\n"<<std::endl;}

};
    void showDetails(Employee &emp)
    {
        emp.showDetails();
    }
    void showDetails(Employee *emp)
    {
        emp->showDetails();
    }

int main()
{
   Manager M1(1001,90000,"Harsh");
    //Employee &Emp_manager=M1;
    //Emp_manager.showDetails();
    //std::cout<<"Manager's Salary is:\t"<<M1.getSalary()<<std::endl;

    Engineer E1(1002,70000,"Ser Yash");
    //Employee &Emp_Engineer=E1;
    //Emp_Engineer.showDetails();
    //std::cout<<"Engineer's Salary is:\t"<<E1.getSalary()<<std::endl;

    showDetails(E1);
    showDetails(&M1);

    Employee e1;
    e1.showDetails();
    

}