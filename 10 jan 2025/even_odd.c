#include<stdio.h>
void main(){
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    if (a%2==0){
        printf("%d show even number",a);
    }
    else{
        printf("%d show odd number",a);
    }
}