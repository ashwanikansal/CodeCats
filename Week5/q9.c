//To find the maximum of two numbers

#include <stdio.h>
#include <stdlib.h>
void main()
{
 int a,b,*ptr1=&a,*ptr2=&b; 
 
   printf("Input the first number : ");
   scanf("%d", ptr1);
   printf("Input the second  number : ");
   scanf("%d", ptr2); 


 if(*ptr1>*ptr2)
 {
  printf("\n%d is the maximum number.",*ptr1);
 }
 else
 {
  printf("\n %d is the maximum number.\n",*ptr2);
 }

}