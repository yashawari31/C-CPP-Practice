#include<stdio.h>

int base_pow(int num,int pow);

int main()
{
    int number,pow;
    printf("enter the number and it's power");
    scanf("%d %d",&number,&pow);
    
    int powered=base_pow(number,pow);
    printf("the number powered is %d",powered);
    return 0;
}

int base_pow(int num,int pow)
{
   if(pow==1)
      return num;
      
   return num*base_pow(num,pow-1);   
 }