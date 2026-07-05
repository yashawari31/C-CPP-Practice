#include <stdio.h>
#include <stdlib.h>

struct Person {
    char name[50];
    int age;
    float height;
    float weight;
};

int main(){
    
    struct Person *p;
    
    p = (struct Person*)malloc(3 * sizeof(struct Person));
    
    for(int i = 0; i < 3; i++){
        printf("Enter details for person %d:\n", i+1);
        
        printf("Name: ");
        getchar();  
        fgets((p+i)->name, sizeof((p+i)->name), stdin);
        
        printf("Age: ");
        scanf("%d", &(p+i)->age);
        
        printf("Height: ");
        scanf("%f", &(p+i)->height);
        
        printf("Weight: ");
        scanf("%f", &(p+i)->weight);
    }
    
    printf("\nDetails of persons:\n");
    for(int i = 0; i < 3; i++){
        printf("\nPerson %d:\n", i+1);
        
        printf("Name: %s", (p+i)->name);  
        printf("Age: %d\n", (p+i)->age);
        printf("Height: %.2f\n", (p+i)->height);
        printf("Weight: %.2f\n", (p+i)->weight);
    }
    
    free(p);
    return 0;
}