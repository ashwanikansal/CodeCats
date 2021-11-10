//Program to count the frequency of every element in an array

// #include <stdio.h>
// #define MAX_SIZE 50

// void main(){
//     int size, arr[MAX_SIZE], visited[MAX_SIZE], count;
//     printf("Enter the size of the array : \n");
//     scanf("%d", &size);
//     printf("Enter the elements of the array : \n");
//     for(int i=0; i<size; i++){
//         scanf("%d", &arr[i]);
//         visited[i]=0;
//     }
//     for(int j=0; j<size; j++){
//         if(visited[j]==1){
//             continue;
//         }
//         count=0;
//         for(int k=0; k<size; k++){
//             if(arr[j]==arr[k]){
//                 count+=1;
//                 visited[k]=1;
//             }
//         }
//         printf("%d\t-\t%d times\n", arr[j], count);

//     }
// }

//Using array hashing

#include <stdio.h>
#define MAX_SIZE 50

int hash[10^7];
void main(){
    int size, arr[MAX_SIZE];
    printf("Enter the size of the array : \n");
    scanf("%d", &size);

    printf("Enter the elements of the array : \n");
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
        hash[arr[i]]+=1;
    }
    for(int j=0; j<size; j++){
            printf("%d\t-\t%d times\n", arr[j], hash[arr[j]]);
    }
}