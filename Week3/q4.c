// To print the following pattern
// *       *
//  *     *
//   *   *
//    * *
//     *
//    * *
//   *   *
//  *     *
// *       *

#include <stdio.h>

void main(){
    int n;
    printf("Enter the number of lines(odd number) you want: ");
    scanf("%d",&n);

    if(n%2==0){
        printf("Please enter an odd number!");
    }
    else{
        printf("The pattern is :\n");
        int m=n-2;
        for(int i=0; i<(n+1)/2; i++){
            for(int j=0; j<=i; j++){
                printf(" ");
            }
            printf("*");
            for(int k=0; k<m; k++){
                printf(" ");
            }
            if(m>0){
                printf("*\n");
            }
            m-=2;        
        }
        printf("\n");
        int x=1;
        for(int i=(n-1)/2; i>0; i--){
            for(int j=0; j<i; j++){
                printf(" ");
            }
            printf("*");
            for(int k=0; k<x; k++){
                printf(" ");
            }
            printf("*\n");
            x+=2;        
        }
    }
}