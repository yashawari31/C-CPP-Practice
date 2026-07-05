#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[100], n, i, j, temp;
    int *ptr=NULL;

    printf("Enter size of array: ");
    scanf("%d", &n);

    ptr = arr;

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", ptr + i);

    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(*(ptr + i) > *(ptr + j))
            {
                temp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp;
            }
        }
    }

    printf("Sorted array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", *(ptr + i));


    free(ptr);    
    return 0;
}