//Program to reverse an array

#include <stdio.h>
#define MAX_SIZE 10

void main(){
    int arr[MAX_SIZE], revarr[MAX_SIZE], size;

    printf("Enter the size of array : \n");
    scanf("%d", &size);
    
    int k=size;
    
    printf("Enter the values of array : \n");
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    
    for(int j=0; j<size; j++){
        revarr[j]=arr[k-1];
        k--; 
    }
    
    for(int m=0; m<size; m++){
        printf("%d\t", revarr[m]);
    }
}