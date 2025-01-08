#include <stdio.h>

int main() {
    int number;
    int Even; 
    printf("Enter an integer: ");
    scanf("%d", &number);

    
    Even = (number % 2 == 0);
    if (Even) {
        printf("%d is an even number.\n", number);
    } else {
        printf("%d is an odd number.\n", number);
    }
}