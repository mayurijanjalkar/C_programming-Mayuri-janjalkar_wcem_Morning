#include<stdio.h>
void main(){
    int i=1,sum;
    printf("Enter the natural number:\n",i);

    while(i<=10){
        printf("%d\n",i);
        sum=sum+i;
        i++;
    }
    printf("Result:%d",sum);
    
}