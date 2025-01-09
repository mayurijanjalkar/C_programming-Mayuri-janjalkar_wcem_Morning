#include<stdio.h>
void main(){
    int z;
    printf("Enter the number");
    scanf("%d",&z);
    if (z%5==0 && z%11==0){
        printf("%d result is true",z);

    }
    else{
        printf("%d Result is false",z);
    }
}