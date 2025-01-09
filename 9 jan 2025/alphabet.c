#include<stdio.h>
void main(){
    char char1;
    printf("enter alphaber");
    scanf("%c",&char1);
    if(char1=='a'||char1=='e'||char1=='i'||char1=='o'||char1=='u'){
        printf("Its a vowel\n");
    
    }
    else{
        printf("its not");
    }
}