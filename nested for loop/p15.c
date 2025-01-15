#include<stdio.h>
void main(){
    char ch1,ch2;
    for(ch1='A';ch1<='E';ch1++){
        for (ch2='A';ch2<=ch1;ch2++){
            printf("%c",ch1);
        }
        printf("\n");
    }
}