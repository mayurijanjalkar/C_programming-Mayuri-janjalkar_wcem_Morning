#include<stdio.h>
void main(){
    int n, i, fact=1;
    printf("Enter the number:");
    scanf("%d",&n);
    
    for( int i=1;i<=n;i++){
        fact=fact*i;
        printf("Enter the factorial%d:%d\n",n,fact);
    }
}
