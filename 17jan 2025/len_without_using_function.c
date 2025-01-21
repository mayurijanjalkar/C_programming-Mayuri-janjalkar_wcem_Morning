#include<stdio.h>
void main(){
    char str[20];
    int i, len=0;
    printf("Enter the name");
    // scanf("%s",str);
    gets(str);
    
    for(i=0;str[i]!=0;i++){
        len+=1;

    }

    printf("%d",len);
}