//To return multiple value from a function using array.
 

#include <stdio.h>
#define SIZE 10

int *printEven(int N, int *numbers);
int main()
{
    int e[SIZE];
    int i;
    printEven(SIZE, e);
    printf("First %d even numbers are: \n", SIZE);
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", *(e + i));
    }
    return 0;
}

int *printEven(const int N, int *numbers)
{
    int i;
    for (i = 0; i < N; i++)
    {
        *(numbers + i) = 2 * (i + 1);
    }
    return numbers;
}