#include<stdio.h>
void main(){
    int a[5]={1,2,3,4,5};
    int arr_even[5],arr_odd[5],i ,j,k_even=0,k_odd=0;
 
    for(i=0;i<5;i++)
    
    {
        if (a[i]%2 ==0){
          arr_even[k_even]=a[i];
          k_even++;
        }
    
    
    }
    for (j=0;j<5;j++){
        if (a[j]%2!=0){
            arr_odd[k_odd]=a[j];
            k_odd++;
        }
     
    } 
    for (i=0;i<k_even;i++){
        printf(" Even:%d \n",arr_even[i]);
    }
    for (j=0;j<k_odd;j++){
        printf("Odd: %d \n",arr_odd[j]);
    }
}