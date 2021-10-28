//To find the power of number using loop

#include <stdio.h>

void main(){
    int n,p,i,pow=1;

    printf("Enter the number and its power : ");
    scanf("%d %d", &n,&p);

    for(i=1; i<=p; i++){
        pow *= n; 
    }

    printf("The value of %d raised to power %d is : %d", n, p, pow);
}