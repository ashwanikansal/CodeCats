// To calculate the final position of grasshopper when its initial postion and number of jumps are given,
// If the position is odd --> it jumps to right
// If the position is even --> it jumps to left

#include <stdio.h>

void grasshopperLocDir();
void grasshopperLocAnother();

void main(){
    int t;
    printf("Enter the test cases : \n");
    scanf("%d", &t);
    int inpos[t], jumps[t];
    printf("Enter the initial position and number of jumps in each test case : \n");
    for(int i=0; i<t; i++){
        for(int j=0; j<2; j++){
            if(j==0){
                scanf("%d", &inpos[i]);
            }
            else{
                scanf("%d", &jumps[i]);
            }
        }
    }
    printf("The final position in each test case will be : \n");
    grasshopperLocDir(inpos, jumps, t);
    grasshopperLocAnother(inpos, jumps, t);
}

void grasshopperLocDir(int inpos[], int jumps[], int t){
    for(int i=0; i<t; i++){
        for(int j=1; j<=jumps[i]; j++){
            if(inpos[i] % 2 ==0){
                inpos[i]-=j;
            }
            else{
                inpos[i]+=j;
            }
        }
        printf("%d\n", inpos[i]);
    }
}

void grasshopperLocAnother(int inpos[], int jumps[], int t){
    for(int i=0; i<t; i++){
        int mod = jumps[i] % 4, z=0;
        if(mod == 0){
            z = 0;
        }
        else if(mod == 1){
            z = -jumps[i];
        }
        else if(mod == 2){
            z = 1;
        }
        else{
            z = jumps[i]+1;
        }

        if(inpos[i]&1){
            printf("%d",inpos[i]-z);
        }
        else{
            printf("%d",inpos[i]+z);
        }
    }
}