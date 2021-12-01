#include <stdio.h>
#include <string.h>

void main(){
    char str1[50], str2[50];
    int hash1[128]={0}, hash2[128]={0}, i, flag=1;
    printf("Enter two strings:\n");
    scanf("%s %s", str1, str2);
    for(i=0; i<strlen(str1); i++){
        int t=str1[i];
        hash1[t]++;
    }
    for(i=0; i<strlen(str2); i++){
        int s=str2[i];
        hash2[s]++;
    }
    for(i=0; i<128; i++){
        int dif = hash1[i]-hash2[i];
        if(dif > 3){
            flag=0;
            break;
        }
    }
    if(flag==1)
        printf("The two strings are almost equivalent.\n");
    else
        printf("The two strings are not equivalent.\n");
}