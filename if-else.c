#include <stdio.h>
void main() {
    int age;
    printf("Enter your age:----");
    scanf("%d",&age);
    if (age>=18){
        printf("You can allow for voting");
    }
    else {
        printf("you can't allow");
    }
}