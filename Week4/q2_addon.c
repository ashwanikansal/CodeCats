#include <stdio.h>
#include <stdbool.h>
#define MAX_SIZE 50

bool hash[MAX_SIZE];
void linearSearch();
void hashArraySearch();

void main(){
    int arr[MAX_SIZE], size, val;
    printf("Enter the size of the array : \n");
    scanf("%d", &size);
    printf("Enter the elements of the array : \n");
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
        hash[i]=true;
    }
    printf("Enter the value you want to search in the given array : \n");
    scanf("%d", &val);
    printf("<---------LINEAR SEARCH--------->\n");
    linearSearch(arr, val, size);
    printf("<-------HASH ARRAY SEARCH------->\n");
    hashArraySearch(val);
}

void linearSearch(int arr[], int val, int size){
    int found=0;
    for(int i=0; i<size; i++){
        if(val==arr[i]){
            printf("Element found!!\n");
            printf("Element is present at position %d.\n", i+1);
            found=1;
        }
    }
    if(found==0){
        printf("Element not found!!\n");
    }
}

void hashArraySearch(int val){
    if(hash[val]==true){
        printf("Element found!!\n");
    }
    else{
        printf("Element not found!!\n");
    }
}
