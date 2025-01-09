#include<stdio.h>
void main(){
    int y;
    printf("Enter year");
    scanf("%d",&y);
    
    if(y%4==0 && (y%100!=0 || y%4==0)){
        printf("%d show Normal yr",y);

    }
    else{
        printf("Leap year",y);
    }
}