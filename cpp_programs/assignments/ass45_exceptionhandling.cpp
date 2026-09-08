/*

	- Create AgeValidator class;
		- Write a program to validate age and throw an exception if the age is negative and the age exit the logical maximum (eg 150)

*/

#include<iostream>
class AgeValidator
{
    int age;

    public:
    void acceptAge()
    {
        std::cout<<"Enter Age: "<<std::endl;
        std::cin>>age;
    }
   
    void checkAge()
    {
        if(age<0)
        {
            throw 1;
        }
        if(age>150)
        {
            throw 2;
        } 
        std::cout<<"Valid Age"<<std::endl;
    }
};

int main()
{
    AgeValidator age;
    age.acceptAge();
    try{
    age.checkAge();
    }

    catch(int except)
    {
        if(except==1)
        {
            std::cout<<"Invalid Age"<<std::endl;
        }
        if(except==2)
        {
            std::cout<<"Logically Impossible Age"<<std::endl;
        }
    }
}