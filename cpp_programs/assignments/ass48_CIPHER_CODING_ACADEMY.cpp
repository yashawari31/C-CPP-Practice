/*

	- Design a Cipher coding Academy system in c++ it Includes:
		- AddmissionProcess: Student can register for courses. 
		- View Batches: Display available courses and students in each batch.
		- Fees Calculations: Calculate and display total fees for registered courses
		- PaymentProcess: handling payment transaction status.
    
	Use below features: 
		- Dynamic Memory allocatin
		- Exception Handling.
		- Inheritance
		- Polymorphism
		- Constructor
		- Destructor 


*/

#include<iostream>
#include<vector>
#include<exception>

class Course;
class Student
{
    int studentId;
    std::string studentName;
    std::vector<Course*>registeredCourses;

    public:
    Student():studentId(0),studentName("NULL"){}
    Student(int id,std::string name):studentId(id),studentName(name){}

    void displayStudent()
    {
        std::cout<<"Student Details:"<<std::endl;
        std::cout<<"Student ID: "<<studentId<<std::endl;
        std::cout<<"Student Name: "<<studentName<<std::endl;
    }

    void registerCourses(Course *course)
    {
          registeredCourses.push_back(course);
    }

    double calculateFees();
    
    int getstudentID()
    {
        return studentId;
    }
};

class Course
{
    int courseId;
    std::string courseName;
    int duration;
    double fees;

    std::vector<Student*>students;

    public:
    Course():courseId(0),courseName("NULL"),duration(0),fees(0){}
    Course(int id,std::string name,int duration,double fee):courseId(id),courseName(name),duration(duration),fees(fee){}

    void addStudent(Student *stud)
    {
       students.push_back(stud);
    }

    void displayBatch()
    {
       std::cout<<"Course ID: "<<courseId<<std::endl;
       std::cout<<"Course Name: "<<courseName<<std::endl;
       std::cout<<"Duration: "<<duration<<std::endl;
       std::cout<<"Course Fees: "<<fees<<std::endl;

       for(std::vector<Student*>::iterator it = students.begin();
       it != students.end();
       it++)
     {
       (*it)->displayStudent();
     }
    }

    double getFees()
    {
        return fees;
    }

    int getcourseID()
    {
        return courseId;
    }
    
};

double Student::calculateFees()
{
    double total = 0;

    for(std::vector<Course*>::iterator it = registeredCourses.begin();
        it != registeredCourses.end();
        it++)
    {
        total += (*it)->getFees();
    }

    return total;
}

class AdmissionProcess
{
    public:
    void registerStudent(Student *student,Course *Course)
    {
        student->registerCourses(Course);
        Course->addStudent(student);
    }
};

class Payment
{
    protected:
    double amount;

    public:
    Payment():amount(0){}
    Payment(double amount):amount(amount){}

    virtual void processPayment()=0;

    virtual ~Payment(){}
};

class OnlinePayment: public Payment
{
    public:
    OnlinePayment():Payment(){}
    OnlinePayment(double amount):Payment(amount){}

    virtual void processPayment()
    {
        std::cout<<"Processing Online Payment..."<<std::endl;
        std::cout<<"Amount: "<<amount<<std::endl;
        std::cout<<"Payment Sucessful!"<<std::endl;
    }
};

class CashPayment: public Payment
{
    public:
    CashPayment():  Payment(){}
    CashPayment(double amount):Payment(amount){}
    
    virtual void processPayment()
    {
        std::cout<<"Processing Cash Payment..."<<std::endl;
        std::cout<<"Amount: "<<amount<<std::endl;
        std::cout<<"Payment Sucessful!"<<std::endl;
    }

};

class AcademyException: public std::exception
{
    protected:
    const char *message;

    public:
    AcademyException(const char *msg):message(msg){}

    const char* what() const throw()
    {
        return message;
    }
};

class InvalidStudentException: public AcademyException
{
    public:
    InvalidStudentException():AcademyException("Invalid Student Details!"){}
};

class CourseNotFoundException : public AcademyException
{
    public:
    CourseNotFoundException()
        : AcademyException("Course not found!")
    {
    }
};

class PaymentException : public AcademyException
{
    public:
    PaymentException()
        : AcademyException("Payment failed!")
    {
    }
};

int main()
{
    std::vector<Student*>students;
    std::vector<Course*>courses;

    AdmissionProcess admissions;

    int choice;

    while(1)
    {
        std::cout<<"\n========= CIPHER CODING ACADEMY =========="<<std::endl;
        std::cout<<"1. Add Student"<<std::endl;
        std::cout<<"2. Add Course"<<std::endl;
        std::cout<<"3. Register Student or Course"<<std::endl;
        std::cout<<"4. View Batches"<<std::endl;
        std::cout<<"5. Calculate Fees"<<std::endl;
        std::cout<<"6. Make Payment"<<std::endl;
        std::cout<<"7. Exit"<<std::endl;

        std::cout<<"Enter Choice: "<<std::endl;
        std::cin>>choice;
    }
    
    switch(choice)
    {
        
    }

    return 0;
}