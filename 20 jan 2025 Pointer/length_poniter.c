#include<stdio.h>
void main(){
    char name[20],*p1;
    int len=0;
    printf("Enter a name");
    scanf("%s",name);

    for(p1=&name[0];*p1!='\0';p1++){
        len++;
    }
    printf("%d",len);
}