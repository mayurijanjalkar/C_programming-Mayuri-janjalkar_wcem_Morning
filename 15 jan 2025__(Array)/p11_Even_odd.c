#include<stdio.h>
void main(){
    int a[5]={1,2,3,4,5};
    int newArray[5],i ,k=0;

    for(i=0;i<5;i++){
        if (a[i]%2 ==0){
          newArray[k]=a[i];
          k++;
        }
    }
   
    for(i=0;i<5;i++){
        if (a[i] % 2 !=0)
        {
        newArray[k]=a[i];
        k++;
        }
    }
    
    for(i=0;i<5;i++){
        printf("%d ",newArray[i]);

    }
}