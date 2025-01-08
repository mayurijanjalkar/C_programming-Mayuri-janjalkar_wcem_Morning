#include <stdio.h>
void main() {
    int a,b,c;
    printf("Enter a two num-");
    scanf("%d %d",&a, &b);
    c=a;
    a=b;
    b=c;
    printf("swapping number a=%d, b=%d\n",a,b);
    
    
}