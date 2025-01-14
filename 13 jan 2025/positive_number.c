#include<stdio.h>
int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    while(num>0)
    {
        printf("Enter the positive number, try again",num);
        scanf("%d",num);
    }
}