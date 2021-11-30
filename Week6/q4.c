#include <stdio.h>
#include <string.h>

void bruteforce(char *);
void anothermethod(char *);
int chartoint(char);

void main(){
    char c[10];
    printf("Enter any Roman number : \n");
    scanf("%s", &c);
    bruteforce(c);
    anothermethod(c);
}

void bruteforce(char *c){
    int num=0;
    for(int i=0; i<strlen(c); i++){
        switch(c[i]){
            case 'I':
                if(c[i+1]!='V' && c[i+1]!='X')
                    num+=1;
                break;
            case 'V':
                if(c[i-1]!='I')
                    num+=5;
                else
                    num+=5-1;
                break;
            case 'X':
                if(c[i-1]=='I')
                    num+=9;
                else if(c[i+1]!='L' && c[i+1]!='C')
                    num+=10;
                break;
            case 'L':
                if(c[i-1]!='X')
                    num+=50;
                else 
                    num+=50-10;
                break;
            case 'C':
                if(c[i-1]=='X')
                    num+=90;
                else if(c[i+1]!='D' && c[i+1]!='M')
                    num+=100;
                break;
            case 'D':
                if(c[i-1]!='C')
                    num+=500;
                else 
                    num+=500-100;
                break;
            case 'M':
                if(c[i-1]!='C')
                    num+=1000;
                else 
                    num+=1000-100;
                break;
            default:
                printf("Invalid Roman Number!!");
        }
    }
    printf("%d\n", num);
}

void anothermethod(char *c){
    int num=0;

    for(int i=0; i<strlen(c); i++){
        int c1=chartoint(c[i]);
        if(i+1<strlen(c)){
            int c2=chartoint(c[i+1]);

            if(c1 >= c2){
                num+=c1;
            }
            else{
                num+=c2-c1;
                i++;
            }
        }
        else{
            num+=c1;
        }
    }
    printf("%d\n", num);
}

int chartoint(char c){
    switch(c){
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
    }
}