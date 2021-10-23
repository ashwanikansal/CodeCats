#include <stdio.h>

//to compute and printing gross salary
void gross(int b, int h, int d){
    float gross_sal;
    gross_sal = b + (b*h/100) + (b*d/100);
    
    printf("The Gross salary is : %.2f", gross_sal);
}

//main function
void main(){
    int basic, hra, da;
    float gross_salary;

    printf("Enter the basic salary : "); 
    scanf("%d", &basic);

    if(basic <= 10000){
        hra = 20;
        da = 80;
    }
    else if(basic <= 20000){
        hra = 25;
        da = 90;
    }
    else{
        hra = 30;
        da = 95;
    }

    //calling the function
    gross(basic, da, hra);

}