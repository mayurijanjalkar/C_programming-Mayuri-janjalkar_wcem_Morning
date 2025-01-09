#include<stdio.h>
void main(){
    char char1;
    printf("enter charcter:");
    scanf("%c",&char1);
    if ((char1>='a' && char1<='z')|| (char1>='A' && char1<='Z')) {
        printf(" Its alphabet",char1);
    }
    else if(char1>='0' && char1<='9'){
        printf(" digits");
    }
    else {
        printf("Special character");
    }
}