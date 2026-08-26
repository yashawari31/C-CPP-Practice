#include <iostream>
using namespace std;

class Institution
{
protected:
    string institution_name;
    string address;

public:
    void SetInstitutionDetails(string name, string add)
    {
        institution_name = name;
        address = add;
    }

    void DisplayDetails()
    {
        cout << "Institution Name : " << institution_name << endl;
        cout << "Address          : " << address << endl;
    }
};

class Student : public Institution
{
protected:
    string stdName;
    int rollNo;

public:
    void SetStudentDetails(string name, int rNo)
    {
        stdName = name;
        rollNo = rNo;
    }

    void displaySetDetails()
    {
        cout << "Student Name     : " << stdName << endl;
        cout << "Roll No          : " << rollNo << endl;
    }
};

class Exam : public Student
{
private:
    string *subjects;
    float *marks;
    int n;

public:
    void SetExamDetails(string sub, float mark, int index)
    {
        subjects[index] = sub;
        marks[index] = mark;
    }

    void displayExamDetails()
    {
        float total = 0;

        cout << "\n----- EXAM DETAILS -----" << endl;

        for(int i = 0; i < n; i++)
        {
            cout << "Subject : " << subjects[i]
                 << "\tMarks : " << marks[i] << endl;

            total += marks[i];
        }

        cout << "\nTotal Marks : " << total << endl;
    }

    void setNumberOfExams(int count)
    {
        n = count;

        subjects = new string[n];
        marks = new float[n];
    }

    ~Exam()
    {
        delete[] subjects;
        delete[] marks;
    }
};

int main()
{
    Exam e;

    e.SetInstitutionDetails("Pune University", "Pune");

    e.SetStudentDetails("Yash", 101);

    int n;

    cout << "Enter number of exams: ";
    cin >> n;

    e.setNumberOfExams(n);

    for(int i = 0; i < n; i++)
    {
        string sub;
        float mark;

        cout << "\nEnter subject: ";
        cin >> sub;

        cout << "Enter marks: ";
        cin >> mark;

        e.SetExamDetails(sub, mark, i);
    }

    cout << "\n===== STUDENT EXAM RECORD =====" << endl;

    e.DisplayDetails();
    e.displaySetDetails();
    e.displayExamDetails();

    return 0;
}