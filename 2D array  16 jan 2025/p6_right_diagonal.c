#include<stdio.h>
void main(){
    int a[3][3]={{1,2,2},{1,2,3},{1,3,2}},sum=0,i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i==j){
                sum+=a[i][j];
            }
        }
    }
    printf("%d : sum of right diagonal\n",sum);
}