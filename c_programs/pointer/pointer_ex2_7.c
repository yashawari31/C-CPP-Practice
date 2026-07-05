#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int *ptr;
    int length, i;

    ptr = arr;

    length = sizeof(arr) / sizeof(arr[0]);

    printf("Length of array = %d\n", length);

    printf("Elements are:\n");
    for(i = 0; i < length; i++)
        printf("%d ", *(ptr + i));

    return 0;
}