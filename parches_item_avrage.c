#include <stdio.h>

int main() {
    float w1, w2, p1, p2, avg;

    printf("Enter weight of item 1: ");
    scanf("%f", &w1);
    printf("Enter purchase of item 1: ");
    scanf("%f", &p1);

    printf("Enter weight of item 2: ");
    scanf("%f", &w2);
    printf("Enter purchase of item 2: ");
    scanf("%f", &p2);

    avg = (w1 * p1 + w2 * p2) / (p1 + p2); 
    printf("Average value: %.2f\n", avg); return 0;
}