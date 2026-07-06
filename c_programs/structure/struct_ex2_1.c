#include <stdio.h>
#include <stdlib.h>

struct Person
{
    char name[50];
    int age;
    float height;
    float weight;
};

int main()
{
    struct Person *p;
    int i;

    p = (struct Person *)malloc(3 * sizeof(struct Person));

    if(p == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    for(i = 0; i < 3; i++)
    {
        printf("\nEnter details of Person %d\n", i + 1);

        printf("Enter Name: ");
        scanf(" %[^\n]", (p + i)->name);

        printf("Enter Age: ");
        scanf("%d", &(p + i)->age);

        printf("Enter Height: ");
        scanf("%f", &(p + i)->height);

        printf("Enter Weight: ");
        scanf("%f", &(p + i)->weight);
    }

    printf("\nPerson Details:\n");

    for(i = 0; i < 3; i++)
    {
        printf("\nName: %s\n", (p + i)->name);
        printf("Age: %d\n", (p + i)->age);
        printf("Height: %.2f\n", (p + i)->height);
        printf("Weight: %.2f\n", (p + i)->weight);
    }

    free(p);

    return 0;
}