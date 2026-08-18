#include<iostream>
#include<string>

class Electronics
{
    protected:
    std::string brand;
    float price;

    Electronics():brand("none"),price(0.0f){}
    Electronics(std::string _brand,float _price):brand(_brand),price(_price){}
};

class Laptop:public Electronics
{
    private:
    int RAM_size;
    std::string processor_type;

    public:
    Laptop():Electronics(),RAM_size(4),processor_type("i5"){}
    Laptop(std::string _brand,float _price,int size,std::string type):Electronics(_brand,_price),RAM_size(size),processor_type(type){}

    void displayDetails()
    {
        std::cout<<"Laptop details are:"<<std::endl;
        std::cout<<"Laptop Brand:"<<brand<<std::endl;
        std::cout<<"Laptop Price:"<<price<<std::endl;
        std::cout<<"Laptop RAM size:"<<RAM_size<<"gb"<<std::endl;
        std::cout<<"Laptop Processor:"<<processor_type<<std::endl;
    }
};

int main()
{
    Laptop l1("Asus Vivobook",45000.4f,6,"i5");
    l1.displayDetails();

    return 0;
}