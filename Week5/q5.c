//To reverse a string using pointers

#include <stdio.h>
#define MAX 50

char* reverse(char *s);
int main(void) {

    char s[MAX];
    printf("Enter any string : \n");
    fgets(s,MAX,stdin);
    printf("%s", reverse(s));
	return 0;
}

char *reverse(char *s){
    int i, j;
    char c;
    for(i=0; *(s+i)!='\0'; i++);
    for(j=0; j<i/2; j++){
        c=*(s+j);
        *(s+j)=*(s+i-1-j);
        *(s+i-1-j)=c;
    }
    return s;
}