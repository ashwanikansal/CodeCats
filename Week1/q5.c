#include <stdio.h>

void main(){
    char c;

    printf("Enter any character! \n");
    scanf("%c",&c);

    int ascii = (int)c;    //typecasting

    //checking whether the character is a digit
    if(ascii>=48 && ascii<=57 ){   
        printf("%c is a digit.", c);
    }

    //checking whether the character is an alphabet
    else if((ascii>=65 && ascii<=90)||(ascii>=97 && ascii<=122)){  
        printf("%c is an alphabet.", c);
    }  

    //checking whether the character is a special character
    else{
        printf("%c is a special character.", c); //
    }
}