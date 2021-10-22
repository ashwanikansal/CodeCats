#include <stdio.h>

void main(){
    
    int rupees, remains;
    int two_thousand, five_hundred, hundred, two_hundred, fifty, twenty, ten, five, two, one;

    printf("Enter the amount in rupees : \n");
    scanf("%d", &rupees);

    two_thousand = rupees / 2000;
    remains = rupees % 2000;
    
    five_hundred = remains / 500;
    remains %= 500;

    two_hundred = remains / 200;
    remains %= 200;

    hundred = remains / 100;
    remains %= 100;

    fifty = remains / 50;
    remains %= 50;

    twenty = remains / 20;
    remains %= 20;

    ten = remains / 10;
    remains %= 10;

    five = remains / 5;
    remains %= 5;

    two = remains / 2;
    remains %= 2;

    one = remains; 
    
    printf("No. of Rs.2000 notes : %d \nNo. of Rs.500 notes : %d \n", two_thousand, five_hundred);
    printf("No. of Rs.200 notes : %d \n", two_hundred);
    printf("No. of Rs.100 notes : %d \nNo. of Rs.50 notes : %d \n", hundred, fifty);
    printf("No. of Rs.20 notes : %d \nNo. of Rs.10 notes : %d \n", twenty, ten);
    printf("No. of Rs.5 notes : %d \nNo. of Rs.2 coins : %d \nNo. of Rs.1 coins : %d \n", five, two, one);

    int total_notes = two_thousand + five_hundred + hundred + fifty + twenty + ten + five + two + one;
    printf("Total notes + coins needed : %d", total_notes);

}