/*
Create a class Student which has protected members string name and int rollno, and public member functions setDetails() to set name and roll number. There is one more member function showDetails() to display student details.

Create a derived class named Marks which inherits the Student class with visibility mode protected, which is having public data member int marks, and member function setStudentDetails() and function display() to display overall details. In main() function, create an object of the Marks class and call the functions accordingly.*/


#include<iostream>
#include<string>
class Student
{
 protected:
   std::string name;
   int rollno;

   public:
   Student():name("Null"),rollno(0){}
   Student(std::string str,int roll):name(str),rollno(roll){}

   void SetDetails(std::string n,int rno)
   {
     name=n;
     rollno=rno;
   }

   void Show()
   {
    std::cout<<"Name:\t"<<name<<"\n"<<"Roll no:\t"<<rollno<<std::endl;
   }

};

class Marks : protected Student{

    public:
    int marks;
   Marks():Student(),marks(0){}
    Marks(std::string str,int rno,int m):Student(str,rno),marks(m){}
    void SetStudentDetails(std::string str,int roll,int mark)
    {
        SetDetails(str,roll);
        marks=mark;
    }
    void Display()
    {
        std::cout<<"Student Details:"<<std::endl;
        Show();
        std::cout<<"Marks:\t"<<marks<<std::endl;

    }
};

int main()
{
    Marks M1;
    M1.SetStudentDetails("yash Awari",33,90);
    M1.Display();

    return 0;
}