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
    Student(int roll,string n,float m):rollNo(roll),name(n),marks(m){}

    void display()
    {
        cout << "Roll No : " << rollNo << endl;
        cout << "Name    : " << name << endl;
        cout << "Marks   : " << marks << endl;
    }
};

int main()
{
    Student s1;

    Student s2(34,"awari",78.8);

    s1.display();
    s2.display();
    return 0;
}