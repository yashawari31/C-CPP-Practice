/*

	- Create a class "Student" which is having following attributes: 
		- protected: name, roll_no.
		- public: - SetDetails() : to set the name and roll number 
		          - displayDetails() to display the details of name and roll number 

    - Create a derived class "Marks" which inherits "Student" class with visibility mode protected having following attributes:
		- public: Marks.
		- SetStudenetDetails().
		In that call SetDetails() function by passing arguments. 
		- SetMarks() which set the marks,
		- DisplayStudentDetails() which display the details of students in that call displayDetails().
		
	- In main function create "Marks" class object and call the function accordingly.	

*/

#include<iostream>

class Student
{
    protected:
    std::string name;
    int roll_no;

    public:
    Student():name("no name"),roll_no(0){}
    Student(std::string stuname,int roll):name(stuname),roll_no(roll){}

   void SetDetails(std::string name,int rollno)
    {
        this->name=name;
        roll_no=rollno;
    }
    void displayDetails()
    {
        std::cout<<"Student Details:"<<std::endl;
        std::cout<<"Student Name: "<<name<<std::endl;
        std::cout<<"Student roll no: "<<roll_no<<std::endl;
    }
    ~Student(){}
};
 
class Marks:protected Student
{
    public:
    float marks;

    Marks():Student(),marks(0.0f){}
    Marks(std::string studname,int rollno,float Marks):Student(studname,rollno),marks(Marks){}

    void SetStudentDetails(std::string studname,int rollno)
    {
        SetDetails(studname,rollno);
        
    }
    void SetMarks(float marks)
    {
        this->marks=marks;
    }
    void DisplayStudentDetails()
    {
        displayDetails();
        std::cout<<"Student Marks: "<<marks<<std::endl;
    }
    ~Marks(){}
};

int main()
{
    Marks m1;
    m1.SetStudentDetails("Yash Awari",33);
    m1.SetMarks(95.4);
    m1.DisplayStudentDetails();
}