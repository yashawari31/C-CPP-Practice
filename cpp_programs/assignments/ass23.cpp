#include<iostream>
#include<string>
class Student
{
  std::string name;
  int rollno;
  float percent;
  char grade;

  public:
   Student()
   {
     name="the man has no name";
    rollno=0;
    percent=0.0f;
    grade='F';

   }
   Student(std::string s,int roll,float per)
   {
    name=s;
    rollno=roll;
    percent=per;
    
    if(percent>=75)
       grade='A';
    else if(percent>=60)
       grade='B';
    else if(percent>=50)
       grade='C';
    else if(percent>=35)
       grade='D';
    else
       grade='F';            
   }
   Student(Student &S)
   {
     name=S.name;
    rollno=S.rollno;
    percent=S.percent;
    grade=S.grade;
   }
   void accept()
   {
    std::cout<<"enter the Student data"<<std::endl;
    std::cout<<"sequence(name,rollno,percent)"<<std::endl;
    std::cin>>name>>rollno>>percent;
       if(percent>=75)
       grade='A';
    else if(percent>=60)
       grade='B';
    else if(percent>=50)
       grade='C';
    else if(percent>=35)
       grade='D';
    else
       grade='F';            
   }

   void display()
   {
    std::cout<<"Roll no:"<<rollno<<std::endl;
    std::cout<<"Name:"<<name<<std::endl;
    std::cout<<"Percentage:"<<percent<<std::endl;
    std::cout<<"Grade:"<<grade<<std::endl; 
   }
   float getPercentage()
   {
    return percent;
   }
   ~Student(){}
};

int main()
{
   Student s1;
    Student s2( "Vaishnavi",103, 96.3);

    Student s3( "Yash",105, 72.4);
    Student s4(s3);

    Student s5, s6;

    std::cout << "\nEnter details of Student 4:";
    s4.accept();

    std::cout << "\nEnter details of Student 5:";
    s5.accept();

    Student arr[5] = {s1, s2, s3, s4, s5};

    // Sorting in descending order of percentage
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[i].getPercentage() < arr[j].getPercentage())
            {
                Student temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

   std:: cout << "\n\nStudents in Descending Order of Percentage\n\n";

    for (int i = 0; i < 5; i++)
    {
        arr[i].display();
    }

    return 0;

}