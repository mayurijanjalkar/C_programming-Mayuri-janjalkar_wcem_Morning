#include<stdio.h>

void main(){
    int i, n, sum = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("The first %d odd natural numbers are:\n", n);
    for(i = 1; i <= 2*n; i++){
        if(i % 2 != 0){
            printf("%d ", i);
            sum += i;
        }
    }
    printf("\nSum of the odd natural numbers: %d\n", sum);
}
