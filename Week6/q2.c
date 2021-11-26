#include <stdio.h>
#include <string.h>

void main(){
    int isDuck;
    char c[]="00234204";
    int i=0;
    while(i<strlen(c) && c[i]=='0'){
        i++;
    }
    while(i<strlen(c)){
        if(c[i]=='0'){
            isDuck=1;
            break;
        }
        i++;
    }

    if(isDuck==0){
        printf("The given number is not a duck number.\n");
    }
    else{
        printf("The given number is a duck number.\n");
    }
}