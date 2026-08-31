/*

	- Create a program to simulate a payment system with following requirements.
	- Include base class : "Payment" with a pure virtual function: ProcessPayment() and virtual destructor.
	
	- Derived classes: 
		- CreditCardPayment:
				- ProcessPayment() using credit card
		- PaypalPayment: 
				- ProcessPayment() using ProcessPayment
		- BankTransferPayment: 
				- ProcessPayment() through bank transfer.
				
	- Each derived class should implement its own logic in ProcessPayment() to display how the payment is processed. 
  
    - Create a Menu driven program that allocates a user to select the payment process and simulate processing the payment.  
 				
*/
#include <iostream>
//Abstract Class with pure virtual function
class Payment
{
    protected:
    double amount;
    public:
    Payment(double Amount):amount(Amount){}
    virtual void ProcessPayment()=0;
    
    virtual ~Payment(){}
};

class CreditCardPayment: public Payment
{
    public:
    CreditCardPayment(double Amount):Payment(Amount){}
    virtual void ProcessPayment()
    {
        std::cout << "\n--- Credit Card Payment ---\n";
        std::cout << "Validating card details..." << std::endl;
        std::cout << "Checking card limit..." << std::endl;
        std::cout << "Authorizing transaction..." << std::endl;
        std::cout << "Payment successful!" << std::endl;
        std::cout<<"Amount Received: "<<amount<<std::endl;
    }
};

class PaypalPayment: public Payment
{
    public:
    PaypalPayment(double Amount):Payment(Amount){}
    virtual void ProcessPayment()
    {
        std::cout << "\n--- PayPal Payment ---\n";
        std::cout << "Connecting to PayPal..." << std::endl;
        std::cout << "Authenticating PayPal account..." << std::endl;
        std::cout << "Authorizing payment..." << std::endl;
        std::cout << "Payment successful!" << std::endl;
        std::cout<<"Amount Received: "<<amount<<std::endl;
    }
};

class BankTransferPayment: public Payment
{
    public:
    BankTransferPayment(double Amount):Payment(Amount){}
    virtual void ProcessPayment()
    {
        std::cout << "\n--- Bank Transfer ---\n";
        std::cout << "Verifying bank account..." << std::endl;
        std::cout << "Checking account balance..." << std::endl;
        std::cout << "Initiating bank transfer..." << std::endl;
        std::cout << "Payment successful!" << std::endl;
        std::cout<<"Amount Received: "<<amount<<std::endl;
    }
};

int main()
{
    int choice;
  while(1){
    std::cout<<"=========================="<<std::endl;
    std::cout<<"      PAYMENT SYSTEM    "<<std::endl;
    std::cout<<"=========================="<<std::endl;

    std::cout<<"1.Credit Card"<<std::endl;
    std::cout<<"2.PayPal"<<std::endl;
    std::cout<<"3.Bank Transfer"<<std::endl;
    std::cout<<"4.Exit"<<std::endl;

    std::cout<<"Enter your choice: ";
    std::cin>>choice;

    Payment *p=NULL;
   
    switch(choice)
    {
        case 1:
           p=new CreditCardPayment(40000);
           break;

        case 2:
           p=new PaypalPayment(40000);
           break;
           
        case 3:
           p=new BankTransferPayment(40000);
           break;
           
        case 4:
           std::cout<<"Exting..."<<std::endl;
           delete(p);
           return 0;   

        default:
           std::cout<<"Invalid Input!!"<<std::endl;
           break;   
    }

    if(p!=NULL)
    {
        p->ProcessPayment();
        delete(p);
        p=NULL;
    }
   }
  return 0;
}