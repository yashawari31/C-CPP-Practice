#include <stdio.h>

int main()
{
    int arr[100], n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\nElement\tAddress\n");

    for(i = 0; i < n; i++)
        printf("%d\t%p\n", arr[i], (void *)&arr[i]);

    return 0;
}