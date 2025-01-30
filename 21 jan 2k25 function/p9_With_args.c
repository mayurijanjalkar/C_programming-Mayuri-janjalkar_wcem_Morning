#include<stdio.h>
void sum_natural_number(int n)
{
    int sum=n*(n+1)/2;
    printf("sum of %d natural number:%d\n",n,sum);

}
int main(){
    int n;
    printf("Enter number");
    scanf("%d",&n);
    sum_natural_number(n);
}