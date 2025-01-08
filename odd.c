#include <stdio.h>

int main() {
    int number;
    int odd; 
    printf("Enter an integer: ");
    scanf("%d", &number);

    
    odd = (number % 2 != 0);
    if (odd) {
        printf("%d is an even number.\n", number);
    } else {
        printf("%d is an odd number.\n", number);
    }
}