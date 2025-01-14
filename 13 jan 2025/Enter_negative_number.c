#include<stdio.h>
void main(){
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    while(num>0){
        printf("Enter the negitive number, try again",num);
        scanf("%d",&num);
    }
}