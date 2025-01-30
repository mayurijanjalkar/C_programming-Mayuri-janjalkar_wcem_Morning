#include<stdio.h>
int sum_of_natural_number(int n){
    
    printf("Enter a number");
    scanf("%d",&n);
    int sum=n*(n+1)/2;
    printf("%d",sum);
}
int main(){
    int n;
    
    n=sum_of_natural_number(n);
    
    
}