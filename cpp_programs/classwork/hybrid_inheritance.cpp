#include<iostream>

class Employee
{
    protected:
    int emp_id;
    float base_salary;
Employee():emp_id(0),base_salary(0.0){std::cout<<"Employee default constructor invoked"<<std::endl;}
Employee(int id,float sal):emp_id(id),base_salary(sal){std::cout<<"Employee parameterised constructor invoked"<<std::endl;}
};

class Manager:virtual protected Employee
{
protected:
float manager_allowance;
protected:
Manager():Employee(),manager_allowance(0){std::cout<<"MAnager default constructor invoked"<<std::endl;}
Manager(int id,float sal,float allowance):Employee(id,sal),manager_allowance(allowance){std::cout<<"Manager parameterised constructor invoked"<<std::endl;}

float getM_Salary()
{
    return base_salary+manager_allowance;
}
};

class Engineer:virtual protected Employee
{
  protected:
  float engineer_allowance;
  protected:
  Engineer():Employee(),engineer_allowance(0){std::cout<<"Engineer Default constructor invoked"<<std::endl;}
  Engineer(int id,float sal,float allowance):Employee(id,sal),engineer_allowance(allowance){std::cout<<"Engineer paramterised constructor invoked"<<std::endl;}

  float getESalary()
  {
    return base_salary+engineer_allowance;
  }
};

class Techlead:  public Manager, public Engineer
{
  public:
  Techlead():Manager(),Engineer(){std::cout<<"Techlead default constructor invoked"<<std::endl;}
  Techlead(int id,float sal,float m_allow,float e_allow):Employee(id,sal),Manager(id,sal,m_allow),Engineer(id,sal,e_allow){std::cout<<"Techlead paramterised constructor invoked"<<std::endl;}

  void showSalary()
  {
    std::cout<<"Manager Salary:\t"<<getM_Salary()<<std::endl;
    std::cout<<"Engineer Salary:\t"<<getESalary()<<std::endl;
  }

  void showDetails()
  {
    std::cout<<"Employee id:\t"<<emp_id<<std::endl;
    std::cout<<"Base Salary:\t"<<base_salary<<std::endl;
  }
};

int main()
{

  Techlead lead2(1001,20000.9,5000,5500);


lead2.showDetails();
  lead2.showSalary();

  return 0;
  
}