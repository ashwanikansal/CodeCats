//To print the permutations of a given string

#include <stdio.h>
#include <string.h>

int c=1;
void swap(char *ch1, char *ch2)
{
    char tmp;
    tmp = *ch1;
    *ch1 = *ch2;
    *ch2 = tmp;
}
void permutation(char *cht, int stno, int endno)
{
   int i;
   if (stno == endno){
     printf("%d\t %s \n",c, cht);
     c++;
   }
   else
   {
       for (i = stno; i <= endno; i++)
       {
          swap((cht+stno), (cht+i));
          permutation(cht, stno+1, endno);
          swap((cht+stno), (cht+i)); 
       }
   }
}
 
int main()
{
    char str[] = "java";
    int n=strlen(str);
    printf(" The permutations of the string are : \n");
    permutation(str, 0, n-1);
    return 0;
}
