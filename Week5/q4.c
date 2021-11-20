//To find the length of string using pointers

#include <stdio.h>
#define MAX 50
void main(){
    char str[MAX], *ptr, c=0;
    ptr=str;
    printf("Enter the string :\n");
    fgets(str, MAX, stdin);
    while(*(ptr+c)!='\0'){
        c++;
    }
    printf("The length of the entered string is %d", c-1);

}