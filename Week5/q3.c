//To store n elements in an array and print the elements using pointer.

#include <stdio.h>

void main(){
    int i,n;
    
    printf("Enter size of the array : \n");
    scanf("%d",&n);

    int a[n], *ptr;
    ptr=a;
    
    printf("Enter elements of array : \n");
    for(i=0; i<n; i++){
        scanf("%d", ptr+i);
    }

    printf("Elements of array are : \n");
    for(i=0; i<n; i++){
        printf("%d ", *(ptr+i));
    }
    
}