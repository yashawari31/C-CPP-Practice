#include<iostream>

class Account
{
    protected:
    int acc_no;
    float balance;

    Account():acc_no(0),balance(0){}
    Account(int acc,float bal):acc_no(acc),balance(bal){}


};

class SavingsAccount: public Account
{
    protected:
    int interest;
    public:
    SavingsAccount():Account(),interest(0){}
    SavingsAccount(int acc,float bal,int rate):Account(acc,bal),interest(rate){}

    void ApplyInterest()
    {
        float Amount=(interest/100.0)*balance;

        std::cout<<"Amount after adding interest is:\t"<<Amount<<std::endl;
    }
};

class Fixed_Deposit:public Account
{
  protected:
  int maturebonus;

  public:
  Fixed_Deposit():Account(),maturebonus(0){}
  Fixed_Deposit(int acc,float bal,int bonus):Account(acc,bal),maturebonus(bonus){}

  void calculate_maturebonus()
  {
    float Mature_Amount=(maturebonus/100.0)*balance;
    std::cout<<"Mature Amount after adding mature bonus as per given mature bonus interest:\t"<<Mature_Amount<<std::endl;
  }
};

int main()
{
    SavingsAccount S1(1001,20000,8);
    S1.ApplyInterest();

    Fixed_Deposit F1(1002,40000,5);
    F1.calculate_maturebonus();

    return 0;
}