#include<stdio.h>
void main(){
    int a[10]={1,0,8,0,5};

    int newArray[5],k=0,i;
    for (i=0;i<5;i++){
        if (a[i]==0){
            newArray[k]=a[i];
            k++;
        }
    }


        for (i=0;i<5;i++){
            if(a[i]!=0){
                newArray[k]=a[i];
                k++;
            }
        }
        for (i=0;i<5;i++){
            printf("%d",newArray[i]);
        }  
    }
  
    
