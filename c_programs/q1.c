#include<stdio.h>
int main()
{
  int arr[20],temp=0,n;
  printf("enter size of array");
  scanf("%d",&n);
  printf("enter array elements");
  
  for(int i=0;i<n;i++)
   {
     scanf("%d",&arr[i]);
    }
     int pos=0;
   for(int i=1;i<n;i++)
    {
         if(arr[i]!=0){
           temp=arr[i];
           arr[i]=arr[pos];
           arr[pos]=temp;
            pos++;
           }
     }
     printf("sorted array\n");
    for(int i=0;i<n;i++)
     {
       printf("%d",arr[i]);
      }
}