#include<stdio.h>
int sub(){
    int a=5;
    int b=2;
    int result;
    result=a-b;
    return result;

}
 
void main()
{
    int r;
    r=sub();
    printf("%d",r);
}