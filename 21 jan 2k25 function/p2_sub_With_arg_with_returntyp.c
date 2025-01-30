#include<stdio.h>
int sub(int x, int y){
    int result;
    result=x-y;
    printf("%d",result);

}
void main(){
    int a=100, b=25;
    sub(a,b);
}