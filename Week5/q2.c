// To swap two numbers using call by reference

#include <stdio.h>

void swap(int *, int *);

void main(){
    int a,b;
    printf("Enter two numbers : \n");
    scanf("%d %d",&a, &b);

    printf("Elements before swapping : \n");
    printf("%d %d\n", a, b);
    swap(&a, &b);
    printf("Elements after swapping : \n");
    printf("%d %d\n", a, b);
}

void swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}