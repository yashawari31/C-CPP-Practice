#include <iostream>

class Student
{
private:
    static int count;

public:
    Student()
    {
        count++;
    }

    static void display()
    {
       std:: cout << "Students Present in Classroom: " << count <<std:: endl;
    }
};

int Student::count = 0;

int main()
{
    Student s1;
    Student s2;
    Student s3;
    Student s4;
    Student s5;

    Student::display();

    return 0;
}