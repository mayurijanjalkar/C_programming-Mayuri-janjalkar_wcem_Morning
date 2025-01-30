#include<stdio.h>
void even_odd(int num){
    if(num%2==0){
        printf("Even:%d",num);
    }
    else{
        printf("Odd:%d",num);
    }
}
int main(){
    int num;
    printf("Enter the number");
    scanf("%d",&num);
    even_odd(num);
}