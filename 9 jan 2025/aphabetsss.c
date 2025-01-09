#include<stdio.h>
void main(){
    char char1;
    printf("enter alphabet");
    scanf("%c",&char1);
    if (char1>='a' && char1<='z'){
        printf("%c Its alphaber",char1);
    }
    else{
        printf("%cNot alphabet",char1);
    }
}