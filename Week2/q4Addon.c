#include <stdio.h>
#include <math.h>

void main(){
    int a,b,i,j,prime;
    printf("Enter the first number of the range : ");
    scanf("%d", &a);
    printf("Enter the second number of the range : ");
    scanf("%d", &b);

    printf("The prime numbers within this range are : \n");
    for(i=a; i<=b; i++){
        prime=1;
        for(j=2; j<sqrt(i); j++){
            if(i % j == 0){
                prime = 0;
            }
        }  
        if(prime == 1){
                printf("%d ", i);
            }      
    }
}