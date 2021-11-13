/*
To find the indices of two numbers in an array 
whose sum will be equal to the target value given.
*/
#include <stdio.h>
#include <stdbool.h>

void directMethod();
void twoPointerMethod();

void main(){
    int arr[]={3,4,5,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target=9;
    directMethod(arr, size, target);
    twoPointerMethod(arr, size, target);
    
}

void directMethod(int arr[], int size, int target){
    int index1, index2;
    bool found=false;
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if((arr[i]+arr[j])==target){
                found=true;
                index1=i;
                index2=j;
                break;
            }
        }
        if(found==true){
            break;
        }
    }
    if(found==true){
        printf("[ %d, %d ]\n", index1, index2);
    }
    else{
        printf("No such indices exists!!\n");
    }
}

void twoPointerMethod(int arr[], int size, int target){
    int index1, index2;
    bool found=false;
    int i=0, j=size-1;
    while(i<j){
        if((arr[i]+arr[j])<target){
            i++;
        }
        else if((arr[i]+arr[j])>target){
            j--;
        }
        else{
            found=true;
            index1=i;
            index2=j;
            break;
        }
    }
    if(found==true){
        printf("[ %d, %d ]\n", index1, index2);
    }
    else{
        printf("No such indices exists!!\n");
    }
}