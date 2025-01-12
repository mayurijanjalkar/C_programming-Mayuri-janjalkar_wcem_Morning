#include<stdio.h>
void main(){
    int i, n,s=0;
    printf("Enter a number of terms:");
    scanf("%d",&n);
    printf("The show a even number:");
    for (int i=1;i<=n;i++){
        printf("%d",2*i);
        s=s+i;


    }
    printf("\nhow the results of sum:%d\n",s);
}