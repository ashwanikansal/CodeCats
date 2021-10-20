#include <stdio.h>

void main(){

    //Declaring the variables
    int a,b,c;

    //Taking input from the user
    printf("Enter the first number \n");
    scanf("%d", &a);
    printf("Enter the second number \n");
    scanf("%d", &b);
    printf("Enter the third number \n");
    scanf("%d", &c);
    
    //Finding and printing the maximum number
    if(a>b && a>c){
        printf("The first number i.e., %d is maximum of the three given numbers.", a);
    }

    else if(b>a && b>c){
        printf("The second number i.e., %d is maximum of the three given numbers.", b);
    }

    else{
        printf("The third number i.e., %d is maximum of the three given numbers.", c);
    }
}