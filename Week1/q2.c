#include <stdio.h>

void main(){
    int a,b;
    printf("Enter the first number \n");
    scanf("%d", &a);
    printf("Enter the second number \n");
    scanf("%d", &b);
    if(a>b){
        printf("The first number i.e., %d is maximum of the given two numbers.", a);
    }
    else{
        printf("The second number i.e., %d is maximum of the given two numbers.", b);
    }
}


