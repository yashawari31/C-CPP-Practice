#include<stdio.h>
#include<stdlib.h>

int arr_sum(int *arr,int size);

int main(void)
{
    int size;
    printf("enter size of array:\n");
    scanf("%d",&size);

    int *arr=(int *)malloc(sizeof(int)*size);
    printf("enter array elements:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",arr[i]);

    }
    int sum=arr_sum(arr,size);
    printf("sum of array elements is:%d\n",sum);
    free(arr);
    return 0;
}

int arr_sum(int *arr,int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum+=arr[i];
    }
    return sum;
}

