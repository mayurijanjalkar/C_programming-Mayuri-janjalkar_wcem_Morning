#include<stdio.h>
void main(){
    int i=1,cube,num;
    printf("Enter the integer:-");
    scanf("%d",&num);

    while(i<=num){
        
        cube=i*i*i;
        printf("cube of integer:%d\n",cube);
        i++;
    }
    
}