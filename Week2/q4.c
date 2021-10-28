#include <stdio.h>
#include <math.h>

void main(){
    int n, i, prime=1;
    
    printf("Enter a number : ");
    scanf("%d",&n);

    for(i=2; i<sqrt(n); i++){
        if(n % i == 0){
            prime = 0;
        }
    }

    if(prime == 0){
        printf("Entered number is not a prime number.");
    }
    else{
        printf("Entered number is a prime number.");
    }
}