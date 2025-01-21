#include<stdio.h>
void main(){
	char str[20];
	int i,len=0,j;
	printf("enter a string");
	
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		len=len+1;
	}

	for(j=len-1;str[j]!='\0';j--)
	{
		printf("%c",str[j]);
	}


}