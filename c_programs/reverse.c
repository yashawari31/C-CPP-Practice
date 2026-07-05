#include<stdio.h>
#include<stdlib.h>

int* create(int size);
void accept(int *arr2, int size);
void reverse(int *arr2, int size);
void display(int *arr2, int size);
void destroy(int *arr2);

int main()
{
    int *arr=NULL;
    int size;

    printf("enter the size of the array:\n");
    scanf("%d",&size);

    arr = create(size);

    accept(arr,size);

    printf("the original array is:\n");
    display(arr,size);

    reverse(arr,size);

    printf("the reversed array is:\n");
    display(arr,size);

    destroy(arr);
    arr=NULL;

    return 0;
}

int* create(int size)
{
    int *arr2 = (int *)malloc(sizeof(int)*size);
    return arr2;
}

void accept(int *arr2,int size)
{
    printf("enter array elements:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",(arr2+i));
    }
}

void reverse(int *arr2,int size)
{
    int temp;
    for(int i=0;i<size/2;i++)
    {
        temp = *(arr2+i);
        *(arr2+i) = *(arr2+size-1-i);
        *(arr2+size-1-i) = temp;
    }
}

void display(int *arr2,int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",*(arr2+i));
    }
    printf("\n");
}

void destroy(int *arr2)
{
    free(arr2);
    arr2 = NULL;
}