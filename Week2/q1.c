#include <stdio.h>

void main(){
    int n,i, sum=0, oddsum=0, evensum=0;

    printf("Enter a number : ");
    scanf("%d", &n);

    printf("First %d natural numbers are: \n", n);
    
    for(i=1; i<=n; i++){

        printf("%d ", i);
        sum += i;

        //if i & 1 gives us 1 it means it is an odd number
        /*for example
           7 => 0 1 1 1
           1 => 0 0 0 1
          --------------
                0 0 0 1
          --------------  
          Hence 7 is an odd number.*/
        if((i & 1) == 1){
            oddsum += i;
        }

        //else it is an even number
        else{
            evensum +=i;
        }
    }

    printf("\nThe sum of these numbers is: %d", sum);
    printf("\nThe sum of odd numbers in it is: %d", oddsum);
    printf("\nThe sum of even numbers in it is: %d", evensum);

}