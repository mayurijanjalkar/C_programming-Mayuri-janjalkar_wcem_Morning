#include<stdio.h>
void main(){
    int a, b,c;
    printf("Find a maximum number\n");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b && a>c){
        printf("%dShow maximum number\n",a);
    }
    else if(b>a && c>a){
        printf("Maximum number will show%d%d",b,c);
    }
    else{
        printf("%d%d%dShow minimum number\n",a,b,c);
    }
       
}