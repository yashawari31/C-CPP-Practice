/*

	- Create a program for Banking System using hybrid inheritance.
    	- Base Class: "BankAccount"
			- Member variables: accHolderName, accNumber.
			- include constructor to initialize function dispAccDetails() 
		
		- Inherited class: "SavingAccounts"
			- Create class "SavingAccounts" that inherites vertually from BankAccount
			- Member Variable: InterestRate.
			- Include constructor for initialization pass details to base class.
			- Add methods dispsavingDetails() to display InterestRate
			
			
		- Create class "CurrentAccount" that inherits vertually from "BankAccount" 
			- Member Variable: OverDraftLimit.
			- Include a constructor to initialize OverDraftLimit and pass account details to base class. 
			- Method: DispCurrentDetails() to display OverDraftLimi. 
			
		- Derived class: 
			- Create a class "PremiumAccount" thaat inherits from both SavingAccounts and CurrentAccount
			- Member Variable: premiumBenifits
			- Include constructor to initialise premiumBenifits and details of both intermediate class. 
			- Method: DispPremiumDetails() that displays all details : - account details from BankAccount.
			                                                           - saving details
																	   - current details
																	   - premium benifits.

*/

#include<iostream>

class BankAccount
{
    protected:
    std::string accHolderName;
    long long accNumber;

    public:
    BankAccount():accHolderName("no name"),accNumber(0){std::cout<<"BankAccount class default constructor invoked"<<std::endl;}
    BankAccount(std::string accHolder,long long accNum):accHolderName(accHolder),accNumber(accNum){std::cout<<"BankAccount class paramterised constructor invoked"<<std::endl;}

    void displayAccDetails()
    {
        std::cout<<"Bank Account Details:"<<std::endl;
        std::cout<<"Bank Account Holder Name: "<<accHolderName<<std::endl;
        std::cout<<"Bank Account Number: "<<accNumber<<std::endl;
    }
    ~BankAccount()
    {
        std::cout<<"Bank Account destructor invoked"<<std::endl;
    }
};

class SavingsAccount: virtual protected BankAccount
{
    protected:
    float InterestRate;

    public:
    SavingsAccount():BankAccount(),InterestRate(0.0f){std::cout<<"Savings Account default constructor invoked"<<std::endl;}
    SavingsAccount(std::string accHolder,long long accNum,float rate):BankAccount(accHolder,accNum),InterestRate(rate){std::cout<<"Savings Account parameterised constructor invoked"<<std::endl;}

    void displaySavingsdetails()
    {
        std::cout<<"Interest Rate for Savings Account: "<<InterestRate<<std::endl;
    }
     ~SavingsAccount()
    {
        std::cout<<"Savings Account destructor invoked"<<std::endl;
    }
};

class CurrentAccount: virtual protected BankAccount
{
    protected:
    double OverDraftLimit;

    public:
    CurrentAccount():BankAccount(),OverDraftLimit(0){std::cout<<"Current Account default constructor invoked"<<std::endl;}
    CurrentAccount(std::string accHolder,long long accNum,double OverDraft):BankAccount(accHolder,accNum),OverDraftLimit(OverDraft){std::cout<<"Current Account paramterised constructor invoked"<<std::endl;}

    void DisplayCurrentDetails()
    {
        std::cout<<"Over Draft Limit for Current Account: "<<OverDraftLimit<<std::endl;
    }
     ~CurrentAccount()
    {
        std::cout<<"Current Account destructor invoked"<<std::endl;
    }
};

class PremiumAccount: virtual SavingsAccount,virtual CurrentAccount
{
    std::string premiumBenefits;

    public:
    PremiumAccount():SavingsAccount(),CurrentAccount(),premiumBenefits("no benefits"){std::cout<<"Premium Account default constructor invoked"<<std::endl;}
    PremiumAccount(std::string accHolder,long long accNum,float rate,double OverDraft,std::string benefits):BankAccount(accHolder,accNum),SavingsAccount(accHolder,accNum,rate),CurrentAccount(accHolder,accNum,OverDraft),premiumBenefits(benefits)
    {
        std::cout<<"Premium Account parameterised constructor invoked"<<std::endl;
    }

    void displayPremiumDetails()
    {
        displayAccDetails();
        displaySavingsdetails();
        DisplayCurrentDetails();
        std::cout<<"Benefits of Premium Account: "<<premiumBenefits<<std::endl;
    }
     ~PremiumAccount()
    {
        std::cout<<"Premium Account destructor invoked"<<std::endl;
    }
};

int main()
{
    PremiumAccount SBIacc("Yash Awari",809222898450,9.5,60000,"40% off on Flight tickets");
    SBIacc.displayPremiumDetails();
}