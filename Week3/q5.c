//To find the sum of elements in an array.
//Addon : To find the sum of even and odd number in an array.

#include <stdio.h>

void main(){
    int n, sum=0, esum=0, osum=0,i,j;
    printf("Input the number of elements to be stored in array : ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter %d elements in the array\n", n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(j=0;j<n;j++){
        sum+=arr[j];
        if(arr[j]%2==0){
            esum+=arr[j];
        }
        else{
            osum+=arr[j];
        }
    }
    printf("%d %d %d", sum,esum,osum);
}