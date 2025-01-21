#include<stdio.h>
void main(){
    int a=5,b=1, result;
    int *p1, *p2;

       p1=&a;
       p2=&b;
       result=*p1-*p2;

    printf("Substraction of two number is %d",result);
}