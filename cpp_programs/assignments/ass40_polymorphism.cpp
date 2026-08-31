/*

	- You are designing a payroll system for a company with 3 types of Employee.
	
	- Full Time Employee: 
		Salary = base salary + bonus + overtime pay
    - Part Time Employee: 
		Salary = HourseWorked * HourlyRate
    - Contrct Employee: 
		Salary = FixedRate + PerformanceBonus
		
	- Create a class "Payroll" with function overloading for CalculateSalary(): 	
		- FullTime Employee : accept BaseSalary, Bonus, OverTimePay
        - Part Time Employee: accept HourseWorked, HourlyRate.
        - Contract Employee: accept Fixed Rate, Performance Bonus.


    - Display the computed salary for all three types of employees.


Note: Validate inputs to ensure no negative values are accepted, use function overloading  effectively 	

*/

#include<iostream>

class Payroll
{

    public:
    double CalculateSalary(double basicSal,double bonus,double OvertimePay)
    {
        if(basicSal<0 ||bonus<0 ||OvertimePay<0 )
        {
            std::cout<<"Invalid Input"<<std::endl;
            return 0;
        }
        return (basicSal+bonus+OvertimePay);
    }

    double CalculateSalary(int hoursWorked,double HourlyRate)
    {
        if(hoursWorked<0 || HourlyRate<0 )
        {
            std::cout<<"Invalid Input"<<std::endl;
            return 0;
        }
        return (hoursWorked*HourlyRate);
    }
    double CalculateSalary(float PerformanceBonus,double FixedRate)
    {
        if(FixedRate<0 || PerformanceBonus<0 )
        {
            std::cout<<"Invalid Input"<<std::endl;
            return 0;
        }
        return (FixedRate+(double)PerformanceBonus);
    }

};

int main()
{
    Payroll payments;
    double FulltimePay=payments.CalculateSalary(50000,15000,10000);
    double PartimePay=payments.CalculateSalary(8,1350);
    double ContractPay=payments.CalculateSalary(1300.0f,15000);

    std::cout<<"Payment for Full time Employee: "<<FulltimePay<<std::endl;
    std::cout<<"Payment for Part time Employee: "<<PartimePay<<std::endl;
     std::cout<<"Payment for Contract Employee: "<<ContractPay<<std::endl;
    
}