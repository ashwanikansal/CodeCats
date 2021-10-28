#include <stdio.h>
#include <math.h>

void main()
{
    int a, i, j, k, l, count = 0;

    printf("Enter the number of values you want to print : ");
    scanf("%d", &a);

    int val[a], zer[a];

    //Entering all the values 
    printf("Enter the values : \n");
    for (i = 0; i < a; i++)
    {
        scanf("%d", &val[i]);
    }

    //Calculating the number of zeroes and appending them in zer[]
    for (k = 0; k < a; k++)
    {
        for (j = 5; val[k] / j >= 1; j *= 5)
        {
            count += val[k] / j;
        }
        zer[k] = count;
        count = 0;
    }

    //Printing all the values
    printf("The number of zeroes in their factorials are : \n");
    for (l = 0; l < a; l++)
    {
        printf("%d\n", zer[l]);
    }
}