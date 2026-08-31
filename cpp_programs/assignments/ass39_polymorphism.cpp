/*

		- Create a class "Teacher"  with member functions: display() to display "I am Teacher".
		- Create another class "CipherTeacher" this class is  inherited from class "Teacher" in that override a display() function to display "I am Pooja Kale the Cipher teacher" .
        - In main function create pointer of teacher and object of CipherTeacher and calls the display() function using pointer.



Note: Try this code again but this time using virtual keyword		


*/

#include<iostream>

class Teacher
{
    public:
    virtual void display()
    {
        std::cout<<"I am Teacher"<<std::endl;
    }
};

class CipherTeacher:public Teacher
{
    public:
    virtual void display()
    {
       std::cout<<"I am Pooja Kale the Cipher Teacher"<<std::endl;
    }
};

int main()
{
    Teacher *teach=new CipherTeacher;
     teach->display();

}