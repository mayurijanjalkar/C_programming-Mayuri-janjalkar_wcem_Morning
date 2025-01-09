#include<stdio.h>
void main(){
    char char1;
    printf("enter alphaber");
    scanf("%c",&char1);
    if (char1>='a' && char1<='z') {
        printf("%c Its Lowwer case",char1);
    }
    else{
        printf("%c Upper case",char1);
    }
}