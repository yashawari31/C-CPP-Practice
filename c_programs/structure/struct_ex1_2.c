#include <stdio.h>

struct employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct employee e;

    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", e.name);

    printf("Enter Salary: ");
    scanf("%f", &e.salary);

    printf("\nEmployee Details:\n");
    printf("Employee ID : %d\n", e.id);
    printf("Employee Name : %s\n", e.name);
    printf("Salary : %.2f\n", e.salary);

    return 0;
}