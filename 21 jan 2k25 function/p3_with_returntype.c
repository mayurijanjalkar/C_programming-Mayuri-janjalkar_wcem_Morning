#include<stdio.h>
int mult(){
    int a=5;
    int b=2;
    int result;
    result=a*b;
    return result;

}
 
void main()
{
    int r;
    r=mult();
    printf("%d",r);
}