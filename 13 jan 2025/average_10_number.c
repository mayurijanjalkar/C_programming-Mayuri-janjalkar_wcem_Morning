#include<stdio.h>
void main(){
    int i=1,n, sum=0, avrg;
   

    while(i<=10){
         printf("Enter the number:\n");
    scanf("%d",&n);
        
        sum=sum+n;
        avrg=sum/10;
        i++;
    }
    printf("Result:-\n%d",sum);
     printf("Result:-\n%d",avrg);
}