#include <stdio.h>

struct student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct student s = {101, "Yash", 89.5};

    printf("Student Details:\n");
    printf("Roll No : %d\n", s.roll);
    printf("Name    : %s\n", s.name);
    printf("Marks   : %.2f\n", s.marks);

    return 0;
}