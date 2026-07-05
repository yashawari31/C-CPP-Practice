#include<stdio.h>
#include<stdlib.h>

struct course
{
    char course_name[50];
    int *marks;
    int subj;
};

struct course* create();
void accept(struct course *c);
float average(struct course *c);
void display(struct course *c);
void destroy(struct course *c);

int main()
{
    struct course *c = NULL;

    c = create();

    accept(c);

    display(c);

    float avg = average(c);
    printf("Average Marks = %.2f\n", avg);

    destroy(c);
    c = NULL;

    return 0;
}

struct course* create()
{
    struct course *c = (struct course*)malloc(sizeof(struct course));
    return c;
}

void accept(struct course *c)
{
    getchar();

    printf("Enter course name: ");
    fgets(c->course_name, sizeof(c->course_name), stdin);

    printf("Enter number of subjects: ");
    scanf("%d", &c->subj);

    c->marks = (int*)malloc(sizeof(int) * c->subj);

    for(int i = 0; i < c->subj; i++)
    {
        printf("Enter marks of subject %d: ", i+1);
        scanf("%d", &c->marks[i]);
    }
}

float average(struct course *c)
{
    int sum = 0;

    for(int i = 0; i < c->subj; i++)
    {
        sum =sum+ c->marks[i];
    }

    return (float)sum / c->subj;
}

void display(struct course *c)
{
    printf("\nCourse Name: %s", c->course_name);

    printf("Marks:\n");
    for(int i = 0; i < c->subj; i++)
    {
        printf("Subject %d: %d\n", i+1, c->marks[i]);
    }
}

void destroy(struct course *c)
{
    free(c->marks); 
    free(c);        
}