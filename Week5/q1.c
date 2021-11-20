// To find the sum of two numbers

#include <stdio.h>

void main(){
    int a,b,sum, *pa, *pb, *psum;
    pa=&a;
    pb=&b;
    psum=&sum;
    printf("Enter two numbers : \n");
    scanf("%d %d",&a, &b);

    *psum = *pa + *pb;
    printf("%d", *psum);
}