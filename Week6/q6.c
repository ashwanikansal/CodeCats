#include <stdio.h>
#include <string.h>

void main(){
    char str[50], newstr[50]= "";
    int i=0;
    printf("Enter any string that consists of G and/or () and/or (al) :\n");
    scanf("%s", str);

    while(i<strlen(str)){
        if(str[i] == 'G'){
            strcat(newstr, "G");
            i++;
        }
        else if(str[i] == '(' && str[i+1] == ')'){
            strcat(newstr, "o");
            i+=2;
        }
        // else if(str[i]=="(" && str[i+1]="a" && str[i+2]=="l" && str[i+3]==")"){
        else{
            strcat(newstr, "al");
            i+=4;
        }
    }
    printf("%s", newstr);
}