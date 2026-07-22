#include <iostream>
#include <string>
using namespace std;

class College
{
private:
    string classroomCode;
    string collegeName;
    string collegeAddress;

public:
    // Parameterized Constructor
    College(string code, string name, string address)
    {
        classroomCode = code;
        collegeName = name;
        collegeAddress = address;
    }

    // Copy Constructor
    College(const College &c)
    {
        classroomCode = c.classroomCode;
        collegeName = c.collegeName;
        collegeAddress = c.collegeAddress;
    }

    // Function to append classroom code
    void appendCode(string code)
    {
        classroomCode = classroomCode + code;
    }

    // Display Function
    void display()
    {
        cout << "\nClassroom Code : " << classroomCode;
        cout << "\nCollege Name   : " << collegeName;
        cout << "\nCollege Address: " << collegeAddress << endl;
    }
};

int main()
{
    // Old Object
    College c1("A101", "DY Patil Institute of Technology", "Pimpri, Pune");

    // New Object using Copy Constructor
    College c2(c1);

    // Append new classroom code
    c2.appendCode("-B202");

    cout << "Old Object Details:\n";
    c1.display();

    cout << "\nNew Object Details:\n";
    c2.display();

    return 0;
}