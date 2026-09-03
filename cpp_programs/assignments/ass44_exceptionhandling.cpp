#include <iostream>

int main()
{
    double balance = 50000;
    double amount;

    std::cout << "Enter amount to withdraw: ";
    std::cin >> amount;

    try
    {
        if(amount<0)
        {
            throw 1;
        }

        if(amount>balance)
        {
            throw 2;
        }

        std::cout<<"Withdrawal Successful"<<std::endl;
        balance-=amount;
        std::cout<<"Balance in Account: "<<balance<<std::endl;
    }
    catch(int except)
    {
        if(except==1)
        {
        std::cout<<"Invalid Amount"<<std::endl;
        }
        else if(except==2)
        {
            std::cout<<"Insufficient Balance"<<std::endl;
        }
    }

    return 0;
}