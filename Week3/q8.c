#include <stdio.h>

void main(){
    int t,g,count=0;
    int elements[3], final[2000];

    printf("Enter the value of test(t)\n");
    scanf("%d",&t);

    for(int test=0; test<t; test++){
        
        printf("Enter the value of games(g)\n");
        scanf("%d", &g);

        for(int game=0; game<g; game++){

            count=0;

            printf("Enter the value of I, N and Q\n");
            for(int extra=0; extra<3; extra++){

                scanf("%d",&elements[extra]);
            
            }
            if( elements[1]%2==0 || elements[0]==elements[2]){
                count=elements[1]/2;
            }
            else{
                count = (elements[1]/2)+1;
            }

            final[game]=count;
        }

        printf("The final values will be: \n");
        for(int fin=0;fin<g; fin++){
            printf("%d\n", final[fin]);
        }
    }
}