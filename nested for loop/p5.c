#include<stdio.h>
void main(){
    int i, j;
    for (int i=1;i<=5;i++){
        for( int j=5;j>=1;j--){
            printf("%d",j);
        }
        printf("\n");
    }
}