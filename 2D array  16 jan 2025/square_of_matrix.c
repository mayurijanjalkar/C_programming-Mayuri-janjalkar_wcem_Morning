#include<stdio.h>
void main(){
    int a[3][3], i,j;

    printf("Enter the element of array:");
    for (i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d\t",&a[i][j]);
        }
    }
    printf("Enter the array is:");
     for (i=0;i<3;i++){
        
        for (j=0;j<3;j++){
        printf("%d\t",a[i][j]*a[i][j]);
    }
    printf("\n");
}
}

