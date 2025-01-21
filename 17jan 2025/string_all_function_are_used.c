#include<stdio.h>
#include<string.h>

#define size 50

int main(){

    char start_string[size]="Mayuri";
    char end_string[size]="j2k";
    char temp[size];

     printf("length of end string:%d\n",strlen(start_string));  //length

     strcpy(temp,start_string);
     printf("temp after strcpy():%s\n",temp);     //copy function are use

     strcat(end_string, start_string);
     printf("%s\n",end_string);      // concatenate

     printf("comparing end with string %d\n",strcmp(end_string, start_string));

     printf("search start string in end string %s\n", 
     strstr(end_string, start_string) );   //search

     printf("revers :%s\n", strrev(start_string));  //reverse

     printf("Upper case%s\n", strupr(end_string));  //upper case

     



}