#include<stdio.h>
void main(){
    int a=5,b=1, i;
    int *p1, *p2;

       p1=&a;
       p2=&b;
       
       if(i<a){
        printf("%d: Its maximum",*p1);
       }
       else{
        printf("%d :its minimun",*p2);
       }
}