#include<stdio.h>
void main(){
    int i=1, fact=1, num;
    printf("Enter the number\n");
    scanf("%d",&num);

    while(i<=num){
        fact*=i;
        printf("%d\n",i);
 i++;
    }
    
    printf("%d\n",fact);
}