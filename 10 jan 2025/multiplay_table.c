#include<stdio.h>
void main(){
    int num;
    printf("Enter no");
    scanf("%d",&num);
    for (int i=1; i<=10;i++){
        // result=num*i;
        printf("result%d*%d=%d\n",i,num*i);
    }
}
