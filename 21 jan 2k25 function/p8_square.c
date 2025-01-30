#include<stdio.h>
void find_sq(int num){
    printf("sq of%d %d %d:\n",num,num*num);
}
int main(){
    int num;
    printf("Enter num");
    scanf("%d",&num);
    find_sq(num);
}