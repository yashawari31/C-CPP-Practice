#include <iostream>
using namespace std;

class Student
{
private:
    int Rno;
    string name;
    float m1, m2, m3;
    float per;
    char grade;

public:
    void accept()
    {
        cout << "Enter Roll Number: ";
        cin >> Rno;

        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter Marks of 3 Subjects: ";
        cin >> m1 >> m2 >> m3;
    }

    void calculate()
    {
        per = (m1 + m2 + m3) / 3;

        if(per >= 75)
            grade = 'A';
        else if(per >= 60)
            grade = 'B';
        else if(per >= 50)
            grade = 'C';
        else if(per >= 40)
            grade = 'D';
        else
            grade = 'F';
    }

    void display()
    {
        cout << "\nStudent Details\n";
        cout << "Roll Number : " << Rno << endl;
        cout << "Name        : " << name << endl;
        cout << "Marks       : " << m1 << " " << m2 << " " << m3 << endl;
        cout << "Percentage  : " << per << endl;
        cout << "Grade       : " << grade << endl;
    }
};

int main()
{
    Student s;

    s.accept();
    s.calculate();
    s.display();

    return 0;
}