#include <stdio.h>
#include <string.h>
#define JEWMAX 10
#define STMAX 100

void main(){
    char jew[JEWMAX], st[STMAX], i, total=0;
    int hasharray[128]={0};
    printf("Enter the jewels : \n");
    scanf("%s", &jew);
    printf("Enter the stones you have : \n");
    scanf("%s", &st);
    for(i=0; i<strlen(st); i++){
        int t=st[i];
        hasharray[t]++;
    }
    for(i=0; i<strlen(jew); i++){
        int s=jew[i];
        total+=hasharray[s];
    }
    printf("Total jewels you have are : %d", total);
}