//To count total number of occurence of a given element in an array.

#include <stdio.h>

void main(){
    
    int n,s,i,j,count=0;
    printf("Enter the size of array : ");
    scanf("%d",&s);

    int arr[s];
    printf("Enter the elements of the array :\n");
    for(i=0;i<s;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the number to be whose occurrence is to be counted : ");
    scanf("%d",&n);

    for(j=0;j<s;j++){
        if(arr[j]==n){
            count+=1;
        }
    }
    printf("%d",count);
}