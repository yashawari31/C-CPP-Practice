#include<stdio.h>
#include<stdlib.h>

struct employee
{
    int employee_id;
    char name[50];
    float salary;
};

struct employee* create(int size);
void accept(struct employee *emp,int size);
void increase_salary(struct employee *emp,int size);
void search_id(struct employee *emp,int size,int search);
void display(struct employee *emp,int size);
void destroy(struct employee *emp);

int main()
{
    struct employee *emp=NULL;
    int size;

    printf("Enter number of employees:\n");
    scanf("%d",&size);

    emp=create(size);

    printf("\nEnter employee data:\n");
    accept(emp,size);

    increase_salary(emp,size);

    printf("\nAfter 10%% salary increase:\n");
    display(emp,size);

    int search;
    printf("\nEnter employee ID to search: ");
    scanf("%d",&search);

    search_id(emp,size,search);

    destroy(emp);
    emp=NULL;

    return 0;
}

struct employee* create(int size)
{
    struct employee *emp=(struct employee*)calloc(size,sizeof(struct employee));
    return emp;
}

void accept(struct employee *emp,int size)
{
    for(int i=0;i<size;i++)
    {
        printf("\nEmployee %d\n",i+1);

        printf("ID: ");
        scanf("%d",&emp[i].employee_id);

        getchar(); // clear buffer

        printf("Name: ");
        fgets(emp[i].name,sizeof(emp[i].name),stdin);

        printf("Salary: ");
        scanf("%f",&emp[i].salary);
    }
}

void increase_salary(struct employee *emp,int size)
{
    for(int i=0;i<size;i++)
    {
        emp[i].salary *= 1.10; // increase by 10%
    }
}

void search_id(struct employee *emp,int size,int search)
{
    for(int i=0;i<size;i++)
    {
        if(search==emp[i].employee_id)
        {
            printf("Employee found at position %d\n",i+1);
            return;
        }
    }
    printf("Employee not found\n");
}

void display(struct employee *emp,int size)
{
    for(int i=0;i<size;i++)
    {
        printf("\nID: %d",emp[i].employee_id);
        printf("Name: %s",emp[i].name);
        printf("Salary: %.2f\n",emp[i].salary);
    }
}

void destroy(struct employee *emp)
{
    free(emp);
}