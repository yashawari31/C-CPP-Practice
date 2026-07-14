#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;
    float marks;

public:
    Student()
    {
        rollNo = 101;
        name = "Yash";
        marks = 89.5;
    }

    void display()
    {
        cout << "Roll No : " << rollNo << endl;
        cout << "Name    : " << name << endl;
        cout << "Marks   : " << marks << endl;
    }
};

int main()
{
    Student s;

    s.display();

    return 0;
}