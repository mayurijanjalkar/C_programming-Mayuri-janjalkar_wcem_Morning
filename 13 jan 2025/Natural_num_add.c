#include<stdio.h>
void main(){
    int i=1,n, sum;
    printf("Enter the number of trem natrual number:\n");
    scanf("%d",&n);

    while(i<=n){
        printf("Display terms on number:\n%d",i);
        sum=sum+i;
        i++;
    }
    printf("Result:-\n %d",sum);
}