// To print the following pattern
// *****
// ****
// ***
// **
// *

#include <stdio.h>

void main(){
    int n;
    printf("Enter the number of lines you want: ");
    scanf("%d",&n);

    printf("The pattern is :\n");
    for(int i=n; i>0; i--){
        for(int j=0; j<i; j++){
            printf("* ");
        }
        printf("\n");
    }
}