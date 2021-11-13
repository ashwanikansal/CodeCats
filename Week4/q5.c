//Program to put 0's in starting and 1's in middle and 2's at the end of an array.

#include <stdio.h>

void main(){
    int arr[]={1,0,0,1,2,1,2,0,1}, temp;
    int length= sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0; i<length; i++){
        for(int j=i+1; j<length; j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
            
    }
    for(int t=0; t<length; t++){
        printf("%d ", arr[t]);
    }
}