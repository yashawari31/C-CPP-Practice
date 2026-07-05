#include <stdio.h>

struct Item
{
    char itemName[50];
    int quantity;
    float price;
    float amount;
};

int main()
{
    struct Item item;
    struct Item *ptr=&item;



    printf("Enter Item Name: ");
    scanf(" %[^\n]", ptr->itemName);

    printf("Enter Quantity: ");
    scanf("%d", &ptr->quantity);

    printf("Enter Price: ");
    scanf("%f", &ptr->price);

    ptr->amount = ptr->quantity * ptr->price;

    printf("\nItem Details:\n");
    printf("Item Name : %s\n", ptr->itemName);
    printf("Quantity  : %d\n", ptr->quantity);
    printf("Price     : %.2f\n", ptr->price);
    printf("Amount    : %.2f\n", ptr->amount);

    return 0;
}