#include <stdio.h>
#include <math.h>

void main(){

    int a, b, c;
    int D;
    
    //Taking values of a,b,c from the user
    printf("A quadratic equation is of the form ax^2 + bx + c\n");
    printf("Enter the value of a : ");
    scanf("%d", &a);
    printf("Enter the value of b : ");
    scanf("%d", &b);
    printf("Enter the value of c : ");
    scanf("%d", &c);

    //finding the discriminent
    D = pow(b, 2) - 4*a*c;

    //checking whether the equation is quadratic or not
    if(a == 0){
        printf("The equation you entered is not a quadratic equation!");
    }   
    //if equation is quadratic then proceed
    else{

        //if roots are real and distinct
        if(D > 0){
            float x1 = (-b + sqrt(D)) / (2*a);
            float x2 = (-b - sqrt(D)) / (2*a);
            printf("First value of x is : %.2f\n", x1);
            printf("Second value of x is : %.2f", x2);
        }
        //if roots are equal
        else if(D == 0){
            float x1 = -b/(2*a);
            printf("Both values of x are same and equal to : %.2f ", x1);
        }
        //if roots are imaginary
        else{
            D = -D;
            float final_b = -b/(2*a);
            float final_sqrtD = sqrt(D)/(2*a);
            printf("The roots are imaginary!!\n");
            printf("One of the root is : %.2f + %.2f i\n", final_b, final_sqrtD);
            printf("Other root is : %.2f - %.2f i\n", final_b, final_sqrtD);
        }

    }

    
}