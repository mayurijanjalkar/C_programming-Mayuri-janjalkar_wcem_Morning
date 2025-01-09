#include<stdio.h>
void main(){
    char char1;
    printf("enter alphaber");
    scanf("%c",&char1);
    if ((char1>='a' && char1<='z')|| (char1>='A' && char1<='b')){
        printf("%c Its alphaber",char1);
    }
    else{
        printf("%cNot alphabet",char1);
    }
}