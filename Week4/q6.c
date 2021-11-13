#include <stdio.h>

int binSearch();
void main(){
    int arr[]={1, 3, 5, 6};
    int target=2, found=0;
    int length = sizeof(arr)/sizeof(arr[0]);
    int low=0, high=length-1, mid;
    int r = binSearch(arr,target,low,high,mid);
    if(r!=-1){
        printf("Element found at index : %d\n", r);
    }
}

int binSearch(int arr[],int target, int low,int high,int mid){
    while(low<=high){
        mid = low+(high-low)/2;
        
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }

        // if((high-low)==1){ //if element not found than break the loop
        //     break;
        // }
    }
    printf("Element not found!! It should be at index : %d\n", mid+1);
    return -1;
}