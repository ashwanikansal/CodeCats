#include <stdio.h>
#include <string.h>

void bruteforce();
void anothermethod();

void main()
{
    char b[]="abcd";
    char a[]="abcde";
    bruteforce(a,b);
    anothermethod(a,b);
}

void bruteforce(char *a, char *b){
    int found, i = 0;
    while (a[i] != '\0')
    {
        found = 0;
        for (int j = 0; b[j] != '\0'; j++)
        {
            if (a[i] == b[j])
            {
                found = 1;
            }
        }
        if (found == 0)
        {
            printf("%c\n", a[i]);
        }
        i++;
    }
}

void anothermethod(char *a, char *b){
    int  extra;
    int atotal=0, btotal=0,i;

    for(i=0; i<strlen(b); i++){
        atotal += a[i];
        btotal += b[i]; 
    }
    atotal+=a[i];
    
    extra = atotal-btotal;
    printf("%c\n", (char)extra);
}