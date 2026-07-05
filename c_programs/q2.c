// Online C compiler to run C program online
#include<stdio.h>
int main()
{
  int arr[20],temp=0,n;
  printf("enter size of array");
  scanf("%d",&n);
  printf("enter array elements\n");
  
  for(int i=0;i<n;i++)
   {
     scanf("%d",&arr[i]);
    }
   for(int k=0;k<n-1;k++)
    {
      for(int j=1 ,i=0;j<n-k-1;i++,j++)
        {
          if(arr[i]>arr[j])
           {
             temp=arr[i];
             arr[i]=arr[j];
             arr[j]=temp;
           }
        }
     }
     printf("sorted array\n");
    for(int i=0;i<n;i++)
     {
       printf("%d\t",arr[i]);
      }
}