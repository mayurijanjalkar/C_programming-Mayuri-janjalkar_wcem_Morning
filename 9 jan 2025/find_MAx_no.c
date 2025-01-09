#include<stdio.h>
void main(){
    int a, b;
    printf("Find a maximum number\n");
    scanf("%d%d",&a,&b);

    if(a>b){
        printf("%dShow maximum number\n",a);
    }
    else{
        printf("%dShow minimum number\n",b);
    }
       
}