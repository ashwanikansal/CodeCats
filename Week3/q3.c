// To print the following pattern
//     *
//    ***
//   *****
//  *******
// *********

#include <stdio.h>

void main(){
    int n;
    printf("Enter the number of lines you want: ");
    scanf("%d",&n);

    printf("The pattern is :\n");
    for(int i=1; i<=n; i++){
        for(int j=i; j<n; j++){
            printf(" ");
        }
        for(int k=1; k<(i*2); k++){
            printf("*");
        }
        printf("\n");
    }
}