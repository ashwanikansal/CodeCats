#include <stdio.h>
#define MAX_SIZE 50

//--------------------DIRECT METHOD-----------------------
// void main(){
//     int size, arr[MAX_SIZE], r;
//     printf("Enter the size of the array : \n");
//     scanf("%d", &size);
//     printf("Enter the elements of the array : \n");
//     for(int i=0; i<size; i++){
//         scanf("%d", &arr[i]);
//     }
//     printf("Enter the number of rotations to be performed : \n");
//     scanf("%d", &r);

//     int temp;
//     for(int j=0; j<r; j++){
//         for(int k=size-1; k>=0; k--){
//             if(k==(size-1)){
//                 temp=arr[k];
//             }
//             else{
//                 arr[k+1]=arr[k];
//             }
//         }
//         arr[0]=temp;
//     }

//     for(int k=0;k<size; k++){
//         printf("%d ", arr[k]);
//     }
// }

//---------------------ANOTHER METHOD---------------------

void reverse();
void main(){
    int size, arr[MAX_SIZE], r,k;
    printf("Enter the size of the array : \n");
    scanf("%d", &size);
    printf("Enter the elements of the array : \n");
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the number of rotations to be performed : \n");
    scanf("%d", &r);   
    k = r % size;

    //first part
    reverse(arr, 0, size-k-1);
    //second part
    reverse(arr, size-k, size-1);
    //all
    reverse(arr, 0, size-1);

    for(int m=0; m<size; m++){
        printf("%d ", arr[m]);
    }
}

void reverse(int arr[], int a, int b){
    int li=a;
    int ri=b;
    while (li<ri)
    {
        int temp=arr[li];
        arr[li]=arr[ri];
        arr[ri]=temp;

        li++;
        ri--;
    }
    
}