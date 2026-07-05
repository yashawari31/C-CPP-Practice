#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int *p=NULL;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    p = arr;

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", p + i);
    }

    printf("Array elements are:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", *(p + i));
    }

    return 0;
}