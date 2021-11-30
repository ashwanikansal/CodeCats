#include <stdio.h>

void bruteforce(char *, int);
void anothermethod(char *, int);

void main(){
    char str[]="aabbaabacabb";
    int k=5;
    bruteforce(str, k);
    printf("\n");
    anothermethod(str, k);
}

void bruteforce(char *str, int k){
    int i=0, j, count;
    while(str[i]!='\0'){
        count=0;
        for(int j=0; str[j]!='\0'; j++){
            if(str[i]==str[j]){
                count++;
            }
        }
        if(count>=k){
            printf("%c",str[i]);
        }
        
        i++;
    }
}

void anothermethod(char *str, int k){
    int hasharray[26]={0}, i;
    
    for(i=0; str[i]!='\0'; i++){
        hasharray[str[i]-'a']++;
    }

    for (i=0; str[i]!='\0'; i++)
    {
        if(hasharray[str[i]-'a']>=k){
            printf("%c", str[i]);
        }
    }
    
}