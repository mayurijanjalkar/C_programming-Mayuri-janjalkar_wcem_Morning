// Copy a to b array
#include<stdio.h>
void main(){
    int a[5] = {2, 4, 3, 1, 5}; 
    int b[5]; 
    int i;
    for (i = 0; i < 5; i++){
        b[i] = a[i]; 
    }
    printf("Elements of array b: ");
    for (i = 0; i < 5; i++){
        printf("%d ", b[i]); 
    }
}
