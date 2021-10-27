//To check whether a number is Armstrong or not. 

#include <stdio.h>
#include <math.h>

void main(){

    int n,x,sum=0;

    printf("Enter a number : ");
    scanf("%d", &n);

    int arm = n; //saving this value of n in another variable for later comparison

    int n_length = 1+(int)log10(n);  //to find number of digits
  
    while (n!=0)
    {
        x= n % 10;
        sum += pow(x, n_length);
        n = n / 10;
    }

    if(arm == sum){
        printf("The entered number is an Armstrong number.");
    }
    else{
        printf("The entered number is not an Armstrong number");
    }
       
}