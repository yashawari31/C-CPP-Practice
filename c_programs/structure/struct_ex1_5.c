#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    int marks[5];
    float percentage;
};

int main()
{
    struct Student s[100];
    int n, i, j, total, topper = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        total = 0;

        printf("\nEnter details of Student %d\n", i + 1);

        printf("Enter Name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Enter Roll No: ");
        scanf("%d", &s[i].roll);

        printf("Enter marks of 5 subjects:\n");
        for(j = 0; j < 5; j++)
        {
            scanf("%d", &s[i].marks[j]);
            total += s[i].marks[j];
        }

        s[i].percentage = total / 5.0;

        if(s[i].percentage > s[topper].percentage)
            topper = i;
    }

    printf("\nStudent Details:\n");

    for(i = 0; i < n; i++)
    {
        printf("\nName: %s\n", s[i].name);
        printf("Roll No: %d\n", s[i].roll);

        printf("Marks: ");
        for(j = 0; j < 5; j++)
            printf("%d ", s[i].marks[j]);

        printf("\nPercentage: %.2f\n", s[i].percentage);
    }

    printf("\nTopper Details:\n");
    printf("Name: %s\n", s[topper].name);
    printf("Roll No: %d\n", s[topper].roll);

    printf("Marks: ");
    for(j = 0; j < 5; j++)
        printf("%d ", s[topper].marks[j]);

    printf("\nPercentage: %.2f\n", s[topper].percentage);

    return 0;
}