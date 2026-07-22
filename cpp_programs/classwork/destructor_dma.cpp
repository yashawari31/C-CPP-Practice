#include<iostream>
#include<string>

class student
{
    std::string name;
    int age;
    float marks;

    public:
    student()//default constructor
    {
        name="NULL"
        age=0;
        marks=0.0f;
    }
    student(std::string _name,int _age,float _marks)//parameterised constructor
    {
        name=_name;
        age=_age;
        marks=_marks;
    }
    ~student()//destructor called
    {
        std::cout<<"\ndestructor invoked"<<std::endl;
    }
    void display()
    {
        std::cout<<"student data:"<<std::endl;
        std::cout<<"name:"<<name<<std::endl;
        std::cout<<"age:"<<age<<std::endl;
        std::cout<<"marks:"<<marks<<std::endl;
    }

};

int main()
{
    student *s1=new student;
    s1->display();

    student *s2=new student("yash",19,47.5f);
    s2->display();

delete s1;
delete s2;

return 0;

}