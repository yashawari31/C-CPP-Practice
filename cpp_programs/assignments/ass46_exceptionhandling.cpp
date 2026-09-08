/*

	- Write a inventory management system where stock is reduced after each sale throw an exception if: 
		- Stock falls below a certain threshold 
		- An invalid stock value(negative or 0 is entered).


*/

#include<iostream>

class Inventory
{
    int stock;
    int threshold;

    public:
    Inventory():stock(0),threshold(0){}
    Inventory(int stock,int threshold):stock(stock),threshold(threshold)
    {
        if(stock<=0)
        {
            throw 1;
        }
    }
    
    void sell(int quantity)
    {
        if(stock-quantity<threshold)
        {
            throw 2;
        }

        stock-=quantity;

        std::cout<<"Stock Sale Successful"<<std::endl;
    }

    void showStock()
    {
        std::cout<<"Current Stock: "<<stock<<std::endl;
        std::cout<<"Threshold: "<<threshold<<std::endl;
    }
};

int main()
{
    try{
    Inventory i(1200,150);
    i.sell(1150);
    i.showStock();
    }

    catch(int except)
    {
        if(except==1)
        {
            std::cout<<"Invalid Stock Value"<<std::endl;
        }
        if(except==2)
        {
            std::cout<<"Stock will fall below Threshold value"<<std::endl;
        }
    }

}