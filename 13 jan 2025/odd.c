 #include<stdio.h>
 void main(){
    int i=1,num,sum=0;
    printf("Enter the number:");
    scanf("%d",&num);
    while(i<=num){
        
        if(i%2!=0){
        sum=i+sum;
       printf("%d \n",i);
    }
       i++;
            
    }
    printf("%d\n",sum);
    }

// #include<stdio.h>

// void main() {
//     int i = 0, odd, sum = 0;
//     printf("Enter the number: ");
//     scanf("%d", &odd);
//     while (i <= odd) {
//         printf("%d ", i);
//         if (i % 2 != 0) {
//             sum += i;
//         }
//         i++;
//     }
//     printf("\nSum of odd numbers: %d\n", sum);
// }


 