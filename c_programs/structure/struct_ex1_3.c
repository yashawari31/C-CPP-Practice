#include <stdio.h>

struct employee
{
    char company[50];
    int empid;
    float salary;
    int experience;
};

struct person
{
    char name[50];
    int age;
    char dob[20];
    char bloodgroup[10];
    struct employee emp;
};

int main()
{
    struct person p;

    printf("Enter Name: ");
    scanf(" %[^\n]", p.name);

    printf("Enter Age: ");
    scanf("%d", &p.age);

    printf("Enter Date of Birth: ");
    scanf(" %[^\n]", p.dob);

    printf("Enter Blood Group: ");
    scanf("%s", p.bloodgroup);

    printf("Enter Company Name: ");
    scanf(" %[^\n]", p.emp.company);

    printf("Enter Employee ID: ");
    scanf("%d", &p.emp.empid);

    printf("Enter Salary: ");
    scanf("%f", &p.emp.salary);

    printf("Enter Years of Experience: ");
    scanf("%d", &p.emp.experience);

    printf("\nPerson Details:\n");
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Date of Birth: %s\n", p.dob);
    printf("Blood Group: %s\n", p.bloodgroup);

    printf("\nEmployee Details:\n");
    printf("Company Name: %s\n", p.emp.company);
    printf("Employee ID: %d\n", p.emp.empid);
    printf("Salary: %.2f\n", p.emp.salary);
    printf("Years of Experience: %d\n", p.emp.experience);

    return 0;
}