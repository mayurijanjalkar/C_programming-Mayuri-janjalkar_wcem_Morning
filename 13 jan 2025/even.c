#include<stdio.h>
void main(){
    int i=1, even,sum=0;
    printf("Enter the integer:\n");
    scanf("%d",&even);
    
    while(i<=even){
        if(i%2==0){
            sum+=i;
            printf("%d\n",i);

        }
    i++;
    }
    printf("%d\n",sum);
}