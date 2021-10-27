//To find the factorial of a number.

#include <stdio.h>

void main(){
    int a,i,f=1;

    printf("Enter the number whose factorial you want to compute: ");
    scanf("%d", &a);

    for(i=1; i<=a; i++){
        f *= i;
    }

    printf("The factorial of %d is : %d", a, f);
}