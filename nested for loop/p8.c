#include<stdio.h>
void main(){
    int i,j;
    for (i=1;i<=5;i++){
        for (j=1;j<=i;j++){
            if (i%2 == 1) {
                printf(" * ");
            }
            else{
                printf(" ");
            }
            
        }
        printf("\n");
    }
    
}

