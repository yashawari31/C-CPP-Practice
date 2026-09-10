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
        if(student==NULL)
        {
            throw InvalidStudentException();
        }

        if(Course==NULL)
        {
            throw CourseNotFoundException();
        }


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
        case 1:
        {
          int id;
          std::string name;
          std::cout<<"Enter Student ID: ";
          std::cin>>id;

          std::cout<<"Enter Student Name: ";
          std::cin.ignore();
          std::getline(std::cin,name);

          Student *student=new Student(id,name);

          students.push_back(student);

          std::cout<<"Student Added Successfully"<<std::endl;

          break;
        }
        
        case 2:
        {
            int id;
            std::string name;
            int duration;
            double fees;

            std::cout<<"Enter Course Id: ";
            std::cin>>id;

            std::cout<<"Enter Course Name: ";
            std::cin.ignore();
            std::getline(std::cin,name);

            std::cout<<"Enter Duration(months): ";
            std::cin>>duration;

            std::cout<<"Enter Course Fees: ";
            std::cin>>fees;

            Course *course=new Course(id,name,duration,fees);

            courses.push_back(course);

            std::cout<<"Course Added Successfully"<<std::endl;

            break;
        }

        case 3:
        {
            int studentID;
            int courseID;

            std::cout<<"Enter Student Id: ";
            std::cin>>studentID;

            std::cout<<"Enter Course Id: ";
            std::cin>>courseID;

            Student *student=NULL;
            Course *course=NULL;

            for(std::vector<Student*>::iterator it=students.begin();
                 it!=students.end();it++)
                 {
                    if((*it)->getstudentID()==studentID)
                    {
                        student=*it;
                        break;

                    }
                 }

            for(std::vector<Course*>::iterator it=courses.begin();
                 it!=courses.end();it++)
                 {
                    if((*it)->getcourseID()==studentID)
                    {
                        course=*it;
                        break;

                    }
                 }     

            try
            {
                admissions.registerStudent(student,course);
                std::cout<<"Registration Successful"<<std::endl;
            }
            catch(const AcademyException& e)
            {
                std::cout <<"Error: "<< e.what() <<std::endl;;
            }
                 
           break;

        }


    }

    return 0;
}