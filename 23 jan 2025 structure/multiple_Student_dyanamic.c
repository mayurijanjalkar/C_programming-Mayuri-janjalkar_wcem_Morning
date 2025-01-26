#include<stdio.h>
struct student{
char name[20];
int rollno;
int marks;
};
void main(){
    int i;
    struct student s[3];
    printf("Enter your information");
    for(i=0;i<3;i++){
    printf("Enter name");
    scanf("%s",s[i].name);
    printf("Enter roll no");
    scanf("%d",&s[i].rollno);
    printf("Enter marks");
    scanf("%d",&s[i].marks);
    printf("Display student information\n");
    printf("name:%s\n",s[i].name);
    printf("RollNO:%d\n",s[i].rollno);
    printf("Marks:%d\n",s[i].marks);

    }
    }
