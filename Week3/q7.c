//To find the smallest and largest element in an array.
//Addon: To find second largest and smallest element in an array.

#include <stdio.h>

void main(){
    int n,i,j;
    printf("How many elements? \n");
    scanf("%d",&n);

    int array[n];
    printf("Enter the Array : \n");
    for(i=0;i<n;i++){
        scanf("%d", &array[i]);
    }
    int max=array[0],max2=array[0], min=array[0], min2=array[0];
    for(j=0;j<n;j++){
        if(max<array[j]){
            max2=max;
            max=array[j];
        }
        else if(array[j]<max && array[j]>max2){
            max2=array[j];
        }

        if(min>array[j]){
            min2=min;
            min=array[j];
        }
        else if(array[j]<min && array[j]>min2){
            min2=array[j];
        }
    }
    printf("The largest element is %d\n",max);
    printf("The smallest element is %d\n",min);
    printf("The second largest element is %d\n",max2);
    printf("The second smallest element is %d\n",min2);
}