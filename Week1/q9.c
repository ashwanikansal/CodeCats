#include <stdio.h>

void main(){
     int phy, che, bio, math, comp;
     float percent;
     char grade;
     
     printf("Enter the marks of five subjects out of 100: \n");

     printf("Physics : ");
     scanf("%d", &phy);
     
     printf("Chemistry : ");
     scanf("%d", &che);
     
     printf("Biology : ");
     scanf("%d", &bio);
     
     printf("Mathematics : ");
     scanf("%d", &math);
     
     printf("Computer : ");
     scanf("%d", &comp);

     percent = (phy + che + bio + math + comp)/5;
     
     if(percent >= 90){
         grade = 'A';
     }
     else if(percent >= 80){
         grade = 'B';
     }
     else if(percent >= 70){
         grade = 'C';
     }
     else if(percent >= 60){
         grade = 'D';
     }
     else if(percent >= 40){
         grade = 'E';
     }
     else {
         grade = 'F';
     }

     printf("The Percentage is %.2f and the grade is %c", percent, grade);

}