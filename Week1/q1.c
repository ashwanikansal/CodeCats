#include <stdio.h>

void main(){
    int a;
    printf("Enter value of a \n");
    scanf("%d", &a);
    if(a % 2 == 0){
        printf("This is an even number");
    }
    else{
        printf("This is an odd number");
    }
}