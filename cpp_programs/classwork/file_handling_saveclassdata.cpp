//Create a Student class with:
//
//rollno
//name
//marks
//
//Accept data for 5 students and implement:
//
//accept() — accept student data
//search() — search student by roll number
//topper() — find student with highest marks
//display_details() — display student details
//add_student_data() — add another student's data



#include<iostream>
#include<string>
#include<fstream>
class Student
{
    int rollno;
    std::string name;
    float marks;

    public:
    Student():rollno(0),name("no name"),marks(0.0f){}
    Student(int roll,std::string _name,float mrks):rollno(roll),name(_name),marks(mrks){}

    void accept()
    {
        std::cout << "Enter Roll No: ";
       std:: cin >> rollno;

        std::cin.ignore();

        std::cout << "Enter Name: ";
        getline(std::cin, name);

        std::cout << "Enter Marks: ";
        std::cin >> marks;
    }
    void display_details()
    {
       std:: cout << "Roll No: " << rollno << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Marks: " << marks <<std:: endl;
    }

    bool search(int r)
    {
        if(rollno==r)
        {
            return true;
        }
        else{
            return false;
        }
    }
    float getMarks()
    {
        return marks;
    }
     void save_to_file(std::ofstream &file)
    {
        file << "Roll No: " << rollno << std::endl;
        file << "Name: " << name << std::endl;
        file << "Marks: " << marks << std::endl;
        file << "----------------------" << std::endl;
    }

};

int main()
{
    Student s[5];
    int n=5;

    std::cout<<"Enter details of 5 students:\n";
    for(int i=0;i<n;i++)
    {
        std::cout<<"Student"<<i+1<<":"<<std::endl;
        s[i].accept();
    }

    //Searching student by rollno
    int r;
    std::cout<<"Enter roll no to search:"<<std::endl;
    std::cin>>r;
    bool found = false;

    for (int i = 0; i < n; i++)
    {
        if (s[i].search(r)==true)
        {
            std::cout << "\nStudent found:\n";
            s[i].display_details();
            found = true;
            break;
        }
    }

    if (!found)
    {
        std:: cout << "Student not found."<<std::endl;
    }

    //Searching topper
    int topper=0;
    for(int i=0;i<n;i++)
    {
        if(s[i].getMarks()>s[topper].getMarks())
        {
            topper=i;
        }
    }
    std::cout<<"The Topper Student is:"<<std::endl;
    s[topper].display_details();

    

    // Display all students
    std::cout << "\nAll Student Details:\n";

    for (int i = 0; i < n; i++)
    {
       std:: cout << "\nStudent " << i + 1 << std::endl;
        s[i].display_details();
    }

     std::ofstream file;
    file.open("students.txt");

    for (int i = 0; i < n; i++)
    {
        s[i].save_to_file(file);
    }

    file.close();

    std::cout << "\nStudent data saved successfully!\n";

}