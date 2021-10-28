//To print the number in reverse order 1234

#include <stdio.h>
#include <string.h>

void main(){
    int n,m,new=0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        m = n % 10; 
        new = new * 10 + m;
        n=n/10;       
    }

    printf("The reverse of the entered number is %d", new);    
}