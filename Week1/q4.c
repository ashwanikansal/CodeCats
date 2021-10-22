#include <stdio.h>

void main(){

    //declaring variables
    int year, century;

    //taking input from user
    printf("Enter the year you want to check whether leap year or not!! \n");
    scanf("%d", &year);

    /*checking for centuries like 2000, 1900, 1800 and so on,
     because for ex:- 1900 is divisible by 4 but not a leap year,
     but 2000 is divisible by 4 and also is a leap year*/
    if (year % 100 == 0){
        century = year / 100;
        if(century % 4 == 0){
            printf("The year %d is a leap year.", year);
        }
        else{
            printf("The year %d is not a leap year.", year);
        }
    }

    //Years which are not centuries ex:- 2020,2045,etc
    else{
        if(year % 4 == 0){
            printf("The year %d is a leap year.", year);
        }
        else{
            printf("The year %d is not a leap year.", year);
        }
    }
}