//To compute sum of all elements of array using pointers

#include <stdio.h>

void main(){
    int *a, n, sum=0;
    printf("Enter the size of array : \n");
    scanf("%u", &n);
    printf("Enter the elements of array : \n");
    for(int i=0; i<n; i++){
        scanf("%d", a+i);
        sum+=*(a+i);
    }
    printf("The sum of entered numbers is : %d", sum);
}