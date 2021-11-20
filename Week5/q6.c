//To sort an array using pointers

#include <stdio.h>
#define MAX 50

void sort(int *, int);
void main(){
    int *a,n;
    printf("Enter the size of array : ");
    scanf("%d",&n);

    printf("Enter the elements of the array : \n");
    for(int i=0; i<n; i++){
        scanf("%d", a+i);
    }
    sort(a,n);
}

void sort(int *a, int n){
    int temp;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(*(a+i)>*(a+j)){
                temp=*(a+i);
                *(a+i)=*(a+j);
                *(a+j)=temp;
            }
        }
    }

    for(int i=0; i<n; i++){
        printf("%d ", *(a+i));
    }
}