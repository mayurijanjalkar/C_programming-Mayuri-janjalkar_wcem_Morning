#include<stdio.h>
void sum_natural_number(){
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    int sum=n*(n+1)/2;
    printf("%d",sum);
}
int main()
{
    sum_natural_number();
}