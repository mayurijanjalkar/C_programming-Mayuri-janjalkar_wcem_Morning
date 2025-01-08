#include <stdio.h>
void main() {
    int DayNumber;
    printf("Enter 1,2,3,4,5,6 or 7");
    scanf("%d",&DayNumber);
    switch(DayNumber){
        case 1:
         printf("Sunday");
         break;
        case 2:
         printf("Monday");
         break;
        case 3:
         printf("Tusday");
         break;
        case 4:
         printf("wednesday");
         break;
        case 5:
         printf("Thursday");
         break;
        case 6:
         printf("friday");
         break;
        case 7:
         printf("saturday");
         break;
        Default :
        printf("Invalid break, choice");
        
    }
}